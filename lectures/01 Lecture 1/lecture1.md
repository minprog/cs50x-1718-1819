---
title: main
description: A first example of the main function
keywords:
  - main
---

* To make this a complete program, we can add the following:

		#include <stdio.h>

		int main(void)
		{
		    printf("hello, world\n");
		}

	* Just like how we need the `when green flag clicked` block in Scratch to start our program, our C program won't run unless we write a few lines to set it up.

	* We notice that there's a `int main(void)` line, and `main` is the standard name in C to indicate that it is the default function in a program that should be run.

	* The top line is harder to guess, but `include` is a keyword that indicates we want to include some other file in our program. `stdio.h` contains (and we only know from searching online and looking at documentation) the standard input/output library, which means that it deals with input (like from the keyboard) and output (printing characters to the screen). In fact, it contains the code of `printf` that we are using. There is no equivalent in Scratch, since by default the functions are already defined and created for us.
