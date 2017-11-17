# Bubble

## Goal

In this exercise we will gradually work towards the implementation of bubble sort. 

## Exercise 1: Print array

Create a new file called `bubble.c` in the directory `practice`. Copy the following code into it:

    #include <stdio.h>
    
    int main(void)
    {
            int my_array[] = {3,2,5,18,16,32};
            int array_size = 6;
            
            // Exercise 1: write code to print the array       
    }

Now write a loop that prints the contents of this array. Example output:

	3 2 5 18 16 32


## Exercise 2: Print array function

Now move this code to a seperate function so that we can reuse it for the following exercises. Create a function called `print_array` that takes two parameter: 1) an `int` representing the size of the array and 2) an `int` array, the array itself.  

Change the `main` function to call this function, like so:

    int main(void)
    {
            int my_array[] = {3,2,5,18,16,32};
            int array_size = 6;
            
            print_array(my_array, array_size);       
    }


## Exercise 3: Two by two

Create a new function called "print_as_pairs" that prints an array in pairs.
Like this:

    3 2
    2 5
    5 18
    18 16
    12 32

So it first prints element 0 and element 1 of the array, then element 1 and 2, then 2 and 3, etc.

Call `print_as_pairs` from the `main` and test if you get the same ouptput as above.

## Exercise 4: bubble once

Implement a function called `bubble_once` that goes over the array and swaps every pair. This should move the first element to the end of the list. The function, like in the previous exercises should take two arguments: an `int` that represents the size of the array; and an `int` array, the array itself. 

Example output:

    3 2 5 18 16 4
    2 3 5 18 16 4
    2 5 3 18 16 4
    2 5 18 3 16 4
    2 5 18 16 3 4
    2 5 18 16 4 3


Call the function `bubble_once` and test if it works. First print the original array, the in your function `bubble_once` call `print_array` after **each** swap. This way we can see if it really works. If you implemented `bubble_once` correctly, it should give the output as above.

## Exercise 5: bubble once II

Modify the previous exercise in such a way that it swaps the two elements like before, but only if the first element is bigger than the second. This should move the biggest element to the end of the list. 

Example output:

	3 2 5 18 16 4

	2 3 5 18 16 4
	2 3 5 18 16 4
	2 3 5 18 16 4
	2 3 5 16 18 4
	2 3 5 16 4 18

As you can see, the biggest element (18) is moved to the end of the list.

## Exercise 5: bubble

Now it's a small step to bubble sort. If you wrote the function `bubble_once` correctly, the call `bubble_once(my_array, array_size)` will bubble the biggest element of the array (`18`) to the end.

> How can we bubble the biggest element towards the **second last** position of the array? Try this.

Create a new function called `bubble_sort` that takes an array and its size as parameters. In this function, call `bubble_once` repeatedly until the array is sorted. The first time the biggest element is moved to the last position in the array, the second time the second biggest element is moved to the second last postion, etc.

Print an empty line after every call to `bubble_once` to visually seperate every bubble. If all went well, the ouput should look like this:

	3 2 5 18 16 4

	2 3 5 18 16 4
	2 3 5 18 16 4
	2 3 5 18 16 4
	2 3 5 16 18 4
	2 3 5 16 4 18

	2 3 5 16 4 18
	2 3 5 16 4 18
	2 3 5 16 4 18
	2 3 5 4 16 18

	2 3 5 4 16 18
	2 3 5 4 16 18
	2 3 4 5 16 18

	2 3 4 5 16 18
	2 3 4 5 16 18

	2 3 4 5 16 18

## Exercise 6 (bonus): bubble faster

As you can see in the previous output, we have a couple of redundant bubbles. When the array is sorted (after 13 iterations) the algorithm continues. You can make it faster by stopping when the array is sorted. You can check this by looking at the swaps: If after one bubbles no values where swapped, the array was apparently sorted. 
