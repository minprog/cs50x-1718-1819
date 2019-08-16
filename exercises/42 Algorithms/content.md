# Exercise: Algorithms

## Goal

Get more comfortable with different search and sorting algorithms.

## Bubble

If you're not sure how bubble sort works, have another look:
![embed](https://www.youtube.com/embed/LZaU8GHNsQI)

Consider the following pseudo code for bubble sort:

	sort array of lenth n:
		end := n - 1
		while array is not sorted:
			for i from 0 to end:
				if array[i] > array[i+1]:
					swap values at i and i + 1
			end := end - 1 

### Exercise 1

Perform the procedure on the array below. Show every swap on an individual line and show which elements you're swapping by underlining them. 

![](sort.PNG)

> What are worst case and best case running time complexities of this procedure?

## Binary search

If you're not sure how binary search works, check this out:
![embed](https://www.youtube.com/embed/aYvuxAPECiw)

Consider the following pseudo code for binary search:

	search value in array:
	  min := 0
	  max := length(array) - 1 
	    while min <= max
	      mid := (max + min) / 2
	      if value is array[mid]
	        print "value found"
	        stop
	      if value < array[mid]
	        max := mid - 1
	      else
	        min := mid + 1
	    print "value not found"

### Exercise 2
Perform the procedure on the array below. Your goal is to try and find the value 15. Show on every line the updated min, max and mid. Use a circle to indicate the min value, a square for max, and a triangle for mid. Indicate clearly at which line the procedure terminates and add if the value is found or not.

![](search.PNG)

> What are worst case and best case running time complexities of this procedure?
> How many more rows in the table would you need to fill out if we would double the size of the input array (from 22 to 44 elements)?  

## Selection sort

Let's do another sorting alogirthm: selection sort. If you don't remember selection sort, have a look here:

![embed](https://www.youtube.com/embed/NEbb4XqKDNU)

The pseudo code here below describes the selection sort algorithm.

	sort array of length n:
		i : = 0
		while i < n:
			index_smallest := find index of smallest element in array between i and n
			swap values at index_smallest and i
			i := i + 1

### Exercise 3.1

Perform the procedure on the array below. Show every swap on an individual line and show which elements you're swapping by underlining them. Also show which part of the array is sorted on every line by drawing a rectangle around the sorted part of the array.  

![](sort.PNG)

> What are worst case and best case running time complexities of this procedure?

### Exercise 3.2

Now let's implement selection sort.

#### Step 1
Create a new file called `selection-sort.c` in `practice` and copy the code below into it.

	#include <stdio.h>

	void print_array(int a[], int n);
	void sort(int a[], int n);

	int main (void)
	{
	    int array[] = {5, 1, 2, 8, 6};
	    int n = sizeof(array)/sizeof(int);
	    sort(array, n);

	}

	void print_array(int a[], int n)
	{
	    for(int i = 0; i < n; i++)
	    {
	        printf("%2i ", a[i]);
	    }
	    printf("\n");
	}

	// sort array a of length n, using selection sort
	void sort(int a[], int n)
	{
	    // TODO: implement
		print_array(a, n);
	}

#### Step 2
The function `sort`now contains a call to `print_array`. This is of course not what sort is supposed toe do. Instead, implement selection sort in the function `sort`. Print the array after every swap in the sort procedure, so that we can inspect the intermediary results.

#### Step 3
Compile and test.
> Is the output of your program identical to what you wrote down in Exercise 3.1? If it isn't, why not?

## Other algorithms:
If you want to get some extra exercise you can alway try to implement some of the other algorithms proposed in the lecture:

Merge sort:
![embed](https://www.youtube.com/embed/yF3hMKmCk1A)

Insertion sort:
![embed](https://www.youtube.com/embed/ntB1D3Bbz5I)

Always first try to execute a (small) example by hand as you did above, before you implement it. Always try to print intermediary results and compare them to what you wrote down.