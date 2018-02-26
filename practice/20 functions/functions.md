# Functions

## Goal

Get some practice with writing functions. Before you start coding you might want to have look at this video:

![embed](https://www.youtube.com/embed/n1glFqt3g38)

## Getting started

Create a new file called `functions.c` in the directory `practice`

Copy the following code into the file

	#include <stdio.h>

	int times_two(int a);
	void print_int(int a);

	int main (void)
	{
	    int x = 2;
	    int y = times_two(x);

	    print_int(y);
	}

	int times_two(int a)
	{
	    return a*2;
	}

	void print_int(int a)
	{
	    printf("Value = %i\n", a);
	}

## Exercise 1

Create a function called `half` that takes an integer as input and returns that input divided by two. (You can just use integer division for this exercise. Don't worry about rounding correctly.)

Remember that defining a function consists of two parts:

- Define the prototype at the top of the file.
- Define the implementation somewhere below the `main` function.

Take a look at how this is done for `times_two` and `print_int`.

Test the function by changing the line `int y = times_two(x);` into `int y = half(x);`.

## Exercise 2

Create a function called `print_float` that takes a float as input and prints the value with a precision of two decimals.

Test the function by calling `print_float(2.7444)` from the `main` and verify that that it prints:

	Value = 2.74

## Exercise 3

Create a function called `average` that takes two *integers* and returns the average of these two integers as a *float*.

What should the protoype look like? What are the types of the parameters? What is the type of the return value?

Think of a use case. E.g., the average of 4 and 7 is 5.5. Does your function do this correctly?

Test your result by calling the function `avarage` from the `main` and print the result using your `print_float`.

## Exercise 4

Create a function called `max` that takes two *floats* and returns the maximum value as a *float*.

Test your function.

## Exercise 5

Create a function called `print_array` that takes two paremeters: a *float array* and an *integer* (denoting the length of the array). The function should print the entire array of floats to a precision of two decimals. E.g.,

	float a[] = {1.555, 3, 1.645, 178};
	print_array(a, 4);

should print something like:

	1.55, 3.00, 1.64, 178.00

Test if your function works, by creating an array in `main` and call the function `print_array` on that array.

## Exercise 6

Create a function that finds the maximum value in a *float* array. Before you implement the function, ask yourself the following questions:

- What is a good name for the function?
- What should the type of the return value be?
- What are the parameters? What are their types and what are good names for them?

Think of a couple of good testcases. What is the max of `{1.555, 3, 1.645, 178}`? What is the max of an array with only one element? What is the max of an empty array?

Test your function.
