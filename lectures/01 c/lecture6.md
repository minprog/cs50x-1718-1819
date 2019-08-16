---
title: Functions
description: A first example of defining a function
keywords:
  - function
  - return
---

* Let's write our own function that returns a value:

		// Return value

		#include <cs50.h>
		#include <stdio.h>

		int square(int n);

		int main(void)
		{
		    int x = get_int("x: ");
		    printf("%i\n", square(x));
		}

		// Return square of n
		int square(int n)
		{
		    return n * n;
		}

	* Line 5 declares the prototype, or definition, of a function we will write, called `square`. The `int` before `square` indicate that `square` will return an `int`, and `int n` inside the parentheses indicate that `square` takes in an `int` that it will refer to as `n`. We need a prototype because our compiler for C reads in files from top to bottom, and the `main` function calls `square` before it's defined unless we have that line above it.

	* Line 10 calls `square`, passing in `x`, and the return value is not stored but passed directly to `printf`, which will substitute it in the string and print it to the screen. We could define a variable like `int squaredvalue` above, and then substitute it in, but since we are only using it once after we create it, it's considered better design to include it directly where we use it.

	* Finally, in line 14, we write the code for `square`, and return our desired value with the `return` keyword.
