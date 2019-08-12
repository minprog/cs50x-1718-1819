---
title: for
description: A first example of a for-loop
keywords:
  - for
  - repeat
  - loop
---

* To `repeat` something a certain number of times, we can use this:

		for (int i = 0; i < 50; i++)
		{
		    printf("hello, world\n");
		}

	* This is a little harder to figure out, but we can go through step by step. `for` is another keyword in C that indicates a loop.
	
	* `int i = 0` is an initialization of a variable, which means that we created a variable with the name `i`, of the type `int`, or integer, and set its initial value to `0`. In C, each variable has a type of value.

	* Then `i < 50` is the Boolean expression that the `for` loop checks, to determine if it will continue or not. Since this condition is true, the `for` loop will run the `printf` line. And since we started `i` at 0, stopping before `i` reaches 50 will mean this runs exactly 50 times, as we intended.

	* Finally, `i++` is an expression in C that adds 1 to the value of `i`. Then, the `for` loop will check `i < 50`, and repeat this process until the Boolean expression is no longer true.
