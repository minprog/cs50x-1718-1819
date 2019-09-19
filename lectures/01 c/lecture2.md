---
title: while(true)
description: A first example of while(true)
keywords:
  - forever
  - while
  - loop
---

* A `forever` block can be translated to C like this:

		while (true)
		{
		    printf("hello, world\n");
		}

	* The `while` keyword means that the loop will run as long as the Boolean expression inside the parentheses is true. And since `true` will always be true, the loop will run forever.
