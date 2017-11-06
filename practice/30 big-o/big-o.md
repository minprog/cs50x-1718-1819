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

	// computes the median of array a of size n
	float median(float a[], int n)
	{
	    if(n <= 0) return 0;

	    sort(a,n);
	    return (a[(n-1)/2] + a[n/2])/2;
	}

### Q2.5

For the following code fragment it is assumed that the input array `a` is already sorted.

#### Code

	// computes the median of sorted array a of size n
	float median(float a[], int n)
	{
	    if(n <= 0) return 0;
	    return (a[(n-1)/2] + a[n/2])/2;
	}



