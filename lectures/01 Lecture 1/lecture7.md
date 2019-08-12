---
title: Overflow
description: An introduction to overflow
keywords:
  - overflow
---

## Overflow

* In our computers, the number of bytes in our memory is finite. As a result, we can store only so much data. In C, each type of data has a fixed number of bytes allocated to instances of it. For example, every `int` has only 4 bytes in the CS50 IDE.

* As a result, one problem we can run into is *integer overflow*. Imagine that we have a binary number with 8 bits:

		1 1 1 1 1 1 1 0

* If we added `1` to that, we'll get `1 1 1 1 1 1 1 1`, but what happens if we add another `1` to that? We'll start carrying over all the ``0``s to get `0 0 0 0 0 0 0 0`, but we don't have an extra bit to the left to actually store that larger value.

* We can see this in a program, [overflow.c](http://cdn.cs50.net/2017/fall/lectures/1/src1/overflow.c.src):

		// Integer overflow

		#include <stdio.h>
		#include <unistd.h>

		int main(void)
		{
		    // Iteratively double i
		    for (int i = 1; ; i *= 2)
		    {
		        printf("%i\n", i);
		        sleep(1);
		    }
		}

* If we compile and run this, we see:

		1
		2
		4
		8
		16
		...
		1073741824
		overflow.c:9:25: runtime error: signed integer overflow: 1073741824 * 2 cannot be represented in type 'int'
		-2147483648
		0
		0
		...

	* We see that our program noticed an error, as we doubled `i` too many times for its value to fit into the bytes allocated for it.

* Another bug can arise when we have *floating-point imprecision*.

* Let's write a simple program to see this firsthand:

		#include <stdio.h>

		int main(void)
		{
		    printf("%.55f\n", 1.0 / 10.0);
		}

	* The new part, `%.55f`, just tells `printf` to print 55 digits after the decimal point.

* Now when we compile and run this, we get:

		0.100000000000000000555111512312578...

* Remember that floats have a finite number of bits. But there are an infinite number of real numbers, so a computer has to round and represent some numbers inaccurately. So in this case, the closest approximation a computer can make to `0.1` is that number.

* There are several examples in the real world where these issues create limitations or even dangerous bugs.

* Next time, we'll learn how we can deal with these issues!
