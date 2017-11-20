# Complexity puzzle

## Goal

Use your understanding of algorithmic complexity, to analyze code and figure out where to start optimizing.

## Though she be but little, she is fierce!

Grand Maester Pycelle has noticed that the smaller people in Westoros are more likely to rise to power. Have you ever seen a Wun Wun the giant on a throne? Being quite the little data scientiest, he would like to have a better overview of the body height of all the people of importance in Westeros. Specifically he would like to know the deviation of the height from the average and median of the population of Westeros. So, Pycelle sat down in front of his computer and wrote a program to compute all of this.

He entered some data that he could find, however he noticed that when he started adding data, his algorithm was getting unacceptably slow. Maybe you can help him figure out why.

### Q3

It is not your goal to optimice Pycelle's code, but to get a better understanding of why it is running slow. The code contains several functions `sort`, `median`, and `average`. The `main` function consists of three steps: 1) Compute the deviation from the average for all people of Westors, 2) compute the deviation from the median, and 3) print the results.


Write down the worst-case running time (O(N)) for every part of the code:

1. Sort: O(N) = ?
2. Average: O(N) = ?
3. median: O(N) = ?
4. Step 1 (compute the deviation from average for _all_ Westerosi): O(N) = ?
5. Step 2 (compute the deviation from median for _all_ Westerosi): O(N) = ?
6. Step 3 (print data): O(N) = ?
7. For the entire program: O(N) = ?

> What part of the code should Pycelle focus on optimzing, if he wants to make the program more efficient?

#### Code

	#include <stdio.h>
	#include <cs50.h>

	#define N 20

	float average(int a[], int n);
	float median(int a[], int n);
	void sort(int a[], int n);
	void swap(int* a, int* b);

	int main()
	{
	    // data
	    char *westerosi[N] = {"Bron", "Jon", "Arya", "Bran", "Davos", "Brienne",
	        "Theon", "Sansa", "Jaime", "Samwell", "Tormund", "Tyrion", "Varys",
	        "Cersei", "Deanarys", "Mag the Mighty", "The Mountain", "Jorah",
	        "The Hound", "Wun Wun"};
	    int height[N] = {183, 173, 155, 180, 185, 191, 175, 175, 187, 173, 183,
	        135, 175, 166, 157, 422, 206, 185, 198, 416};

	    // arrays for deviation values
	    float deviation_from_average[N];
	    float deviation_from_median[N];

	    // Step 1: Compute deviation from average
	    for(int i = 0; i < N; i++)
	        deviation_from_average[i] = height[i] - average(height, N);

	    // Step 2: Compute deviation from median
	    for(int i = 0; i < N; i++)
	        deviation_from_median[i] = height[i] - median(height, N);

	    // Step 3: Print data
	    printf("     Westerosi | Height | d(avg) | d(median)\n");
	    printf("---------------+--------+--------+--------\n");
	    for(int i = 0; i < N; i++)
	    {
	        printf("%14s |  %3icm |  %3.0fcm |  %3.0fcm\n", westerosi[i],
	            height[i], deviation_from_average[i], deviation_from_median[i]);
	    }
	}

	float median(int a[], int n)
	{
	    if(n <= 0) return 0;

	    int copy[n];
	    for(int i = 0; i < n; i++)
	        copy[i] = a[i];

	    sort(copy,n);
	    return (a[(n-1)/2] + a[n/2])/2.0;
	}

	float average(int a[], int n)
	{
	    long total = 0;
	    for(int i = 0; i < n; i++)
	    {
	        total += a[i];
	    }
	    return ((float)total)/n;
	}

	void sort(int a[], int n)
	{
	    for(int i = 0; i < n - 1; i++)
	        for(int j = 0; j < n - i - 1; j++)
	            if(a[j] > a[j+1])
	                swap(a + j, a + j + 1);
	}

	void swap(int* a, int* b)
	{
	    int tmp = *a;
	    *a = *b;
	    *b = tmp;
	}

#### Output

	     Westerosi | Height | d(avg) | d(median)
	---------------+--------+--------+--------
	          Bron |  183cm |  -18cm |    5cm
	           Jon |  173cm |  -28cm |   -5cm
	          Arya |  155cm |  -46cm |  -23cm
	          Bran |  180cm |  -21cm |    2cm
	         Davos |  185cm |  -16cm |    7cm
	       Brienne |  191cm |  -10cm |   13cm
	         Theon |  175cm |  -26cm |   -3cm
	         Sansa |  175cm |  -26cm |   -3cm
	         Jaime |  187cm |  -14cm |    9cm
	       Samwell |  173cm |  -28cm |   -5cm
	       Tormund |  183cm |  -18cm |    5cm
	        Tyrion |  135cm |  -66cm |  -43cm
	         Varys |  175cm |  -26cm |   -3cm
	        Cersei |  166cm |  -35cm |  -12cm
	      Deanarys |  157cm |  -44cm |  -21cm
	Mag the Mighty |  422cm |  221cm |  244cm
	  The Mountain |  206cm |    5cm |   28cm
	         Jorah |  185cm |  -16cm |    7cm
	     The Hound |  198cm |   -3cm |   20cm
	       Wun Wun |  416cm |  215cm |  238cm



