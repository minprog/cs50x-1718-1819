# Big O

The following exercises don't require any programming. These exercises train the understanding of running time complexity.

## Background

Before you start you might want to have another look at the theory. This video explains computational complexity:
![embed](https://www.youtube.com/embed/trwEuug3YFA)

And, this video discusses a number of sorting algorithms and their complexity:
![embed](https://www.youtube.com/embed/j_pXizwRKVw)


## Printing

All the code fragments below have a variable `n`. Determine the worst-case running time (O(n)) complexity for these fragments. 

> If you are not sure, you can always try to run the code yourself and see what happens if you change the variable `n`.

### Q1.1

#### Code

    int n = 6;
    for(int i = 0; i < n; i++)
    {
        printf("%2i ", i);
    }
    printf("\n");

#### Output

	 0  1  2  3  4  5 

### Q1.2

#### Code

    int n = 4;
    for(int i = 0; i < n*3; i++)
    {
        printf("%2i ", i);
    }
    printf("\n");

#### Output

	 0  1  2  3  4  5  6  7  8  9 10 11 

### Q1.3

#### Code

    int n = 16;
    for(int i = n; i > 0; i = i / 2)
    {
        printf("%2i ", i);
    }
    printf("\n");

#### Output

	16  8  4  2  1 

### Q1.4

#### Code

    int n = 2;
    for(int i = 0; i < 8; i++)
    {
        printf("%2i ", n+i);
    }
    printf("\n");

#### Output

	 2  3  4  5  6  7  8  9

### Q1.5

#### Code

    int n = 5;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%2i ", i*j);
        }
        printf("\n");
    }

#### Output

	 0  0  0  0  0 
	 0  1  2  3  4 
	 0  2  4  6  8 
	 0  3  6  9 12 
	 0  4  8 12 16 

### Q1.6

#### Code

    int n = 5;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n/2; j++)
        {
            printf("%2i ", i*j);
        }
        printf("\n");
    }

#### Output

	 0  0 
	 0  1 
	 0  2 
	 0  3 
	 0  4 

### Q1.7

#### Code

    int n = 5;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%2i ", i*j);
        }
        printf("\n");
    }

#### Output

	 0  0  0  0 
	 0  1  2  3 
	 0  2  4  6 
	 0  3  6  9 
	 0  4  8 12 


### Q1.8

#### Code

    int n = 8;
    for(int i = n; i > 0; i = i / 2)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%2i ", i*j);
        }
        printf("\n");
    }

#### Output

	 0  8 16 24 32 40 48 56 
	 0  4  8 12 16 20 24 28 
	 0  2  4  6  8 10 12 14 
	 0  1  2  3  4  5  6  7 


## Functions

For the following functions, write down write down both worst-case and best-case running time (O(n) and Ω(n)).

### Q2.1

#### Code

	float average(float a[], int n)
	{
	    float total = 0;
	    for(int i = 0; i < n; i++)
	    {
	        total += a[i];
	    }
	    return total/n;
	}

### Q2.2

For this question determine the complexity only for `sort` (not for `swap`).

#### code

	void sort(float a[],  int n)
	{
	    for(int i = 0; i < n - 1; i++)
	        for(int j = 0; j < n - i - 1; j++)
	            if(a[j] > a[j+1])
	                swap(a + j, a + j + 1);
	}

	void swap(float* a, float* b)
	{
	    float tmp = *a;
	    *a = *b;
	    *b = tmp;
	}

### Q2.3

For the following code assume `swap` from Question 2.2. 

#### Code 

	void sort(float a[],  int n)
	{
	    int swapped = true;
	    for(int i = 0; i < n - 1 && swapped == true; i++)
	    {
	        swapped = false;
	        for(int j = 0; j < n - i - 1; j++)
	            if(a[j] > a[j+1])
	            {
	                swap(a + j, a + j + 1);
	                swapped = true;
	            }
	    }
	}

### Q2.4

For the following piece of code assume `sort` from Question 2.3.

#### Code 

	// computes the mean of array a of size n
	float mean(float a[], int n)
	{
	    if(n <= 0) return 0;

	    sort(a,n);
	    return (a[(n-1)/2] + a[n/2])/2;
	}

### Q2.5

For the following code fragment it is assumed that the input array `a` is already sorted.

#### Code

	// computes the mean of sorted array a of size n
	float mean(float a[], int n)
	{
	    if(n <= 0) return 0;
	    return (a[(n-1)/2] + a[n/2])/2;
	}


## Though she be but little, she is fierce!

Grand Maester Pycelle has noticed that the smaller people in Westoros are more likely to rise to power. Have you ever seen a Wun Wun the giant on a throne? Being quite the little data scientiest, he would like to have a better overview of the body height of all the people of importance in Westeros. Specifically he would like to know the deviation of the height from the average and mean of the population of Westeros. So, Pycelle sat down in front of his computer and wrote a program to compute all of this.

He entered some data that he could find, however he noticed that when he started adding data, his algorithm was getting unacceptably slow. Maybe you can help him figure out why.

### Q3

It is not your goal to optimice Pycelle's code, but to get a better understanding of why it is running slow. The code contains several functions `sort`, `mean`, and `average`. The `main` function consists of three steps: 1) Compute the deviation from the average for all people of Westors, 2) compute the deviation from the mean, and 3) print the results.


Write down the worst-case running time (O(N)) for every part of the code:

1. Sort: O(N) = ?
2. Average: O(N) = ?
3. Mean: O(N) = ?
4. Step 1 (compute the deviation from average for _all_ Westerosi): O(N) = ?
5. Step 2 (compute the deviation from mean for _all_ Westerosi): O(N) = ?
6. Step 3 (print data): O(N) = ?
7. For the entire program: O(N) = ?

> What part of the code should Pycelle focus on optimzing, if he wants to make the program more efficient?

#### Code

	#include <stdio.h>
	#include <cs50.h>

	#define N 20

	float average(int a[], int n);
	float mean(int a[], int n);
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
	    float deviation_from_mean[N];

	    // Step 1: Compute deviation from average
	    for(int i = 0; i < N; i++)
	        deviation_from_average[i] = height[i] - average(height, N);

	    // Step 2: Compute deviation from mean
	    for(int i = 0; i < N; i++)
	        deviation_from_mean[i] = height[i] - mean(height, N);

	    // Step 3: Print data
	    printf("     Westerosi | Height | d(avg) | d(mean)\n");
	    printf("---------------+--------+--------+--------\n");
	    for(int i = 0; i < N; i++)
	    {
	        printf("%14s |  %3icm |  %3.0fcm |  %3.0fcm\n", westerosi[i],
	            height[i], deviation_from_average[i], deviation_from_mean[i]);
	    }
	}

	float mean(int a[], int n)
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

	     Westerosi | Height | d(avg) | d(mean)
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




