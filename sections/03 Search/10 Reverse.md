# Exercise 2: Reverse {#reverse}

## Goal

Help Tim with debugging his code. He created a program that reverses an array. It seems to work for some cases, but not always.

## Getting started

### Download

	wget https://cs50x.mprog.nl/course/sections/03%20Search/reverse.zip
	unzip reverse.zip
	rm reverse.zip
	cd reverse

### Compile

	make reverse
	./reverse

### Test

	element[0] = 1

	element[1] = 2

	element[2] = 3

	element[3] =
	Input: [1, 2, 3]
	Reversed list: [3, 2, 1]

## Does it work?

When you enter three values as above, Tim's program seems to work. But what happens with other inputs?

### Test

Try to think of some test cases:

* What happens when you enter 4 numbers? What do you expect the output to be?
* What for an input of 8 numbers? Or 2?

### Divide and conquer

Try to analyze where in the code things go wrong.

* Is it the `main()`-function? The `reverse()`-function? The `print_array()`-function?
* Try to zoom in further. Does something go wrong in a loop? Before? After? Can you use some print statements to find out?

### Fix

Once you know where the problem is, fix it.
