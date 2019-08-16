# Mario

<iframe width="560" height="315" src="https://www.youtube-nocookie.com/embed/C-5-22ZvW40" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

## tl;dr

Implement a program that prints out a half-pyramid of a specified height, per the below.

~~~~
$ ./mario
Height: 5
    ##
   ###
  ####
 #####
######

$ ./mario
Height: 3
  ##
 ###
####
~~~~

Although we would normally expect you to choose this version of the problem, aimed at students who are "less comfortable" with programming, you may instead choose to do the [version of Mario](/problems/mario-more) intended for "more comfortable" students!

## Background

Toward the end of World 1-1 in Nintendo's Super Mario Brothers, Mario must ascend a "half-pyramid" of blocks before leaping (if he wants to maximize his score) toward a flag pole. Below is a screenshot.

![Super Mario Brothers](pyramid.png){: style="width: 50%"}

## Steps

Let's deconstruct our problem and take it one step at a time. We will incrementally build our solution, starting from the most basic version that we can think of. It may not be obvious that these are the right steps to take, but in this particular problem, you will indeed be guided towards a correct solution.

###  1. Hash

For this first version, write a program (in a file named `mario.c`) that simply prints one single hash mark (#) to the screen. The program will look a lot like `hello.c` that you wrote, only shorter!

The output should look like this:

~~~~
$ ./mario
#
~~~~

Don't forget to print a newline (`\n`) after that hash mark, like you did in "Hello world"!

### 2. Line

Now that you have set up the basic framework for your program, let's introduce a tiny bit of complexity. We now want our program to print a **line of five hash marks** instead of just one. And we would like to do it efficiently using a loop. Have a look at the `for`-loop example from lecture!

The output should look like this:

~~~~
$ ./mario
#####
~~~~

Don't forget to print a single newline (`\n`) at the end of that line, but not after each hash mark!

### 3. Parametrize

So currently you should have a program that can print one line of hash marks. Now we'll insert a variable atop the program that holds the **size** of the line that should be printed:

	int size = 5;

Now use this variable `size` in your loop to determine the number of times that the loop should run, and hence, how many hash marks should be printed. The output of your program should be the same as before, *unless* you change the value of the variable. In that case your loop should automatically print more (or less) hash marks.

Note that while you could print exactly 5 hash marks *without* using a `for`-loop, now that you use a variable to determine the number of marks, you are required to use such a loop. You wouldn't be able to solve this problem without one!

### 4. Block

Let's say we would like to print a **block** of hash marks, like this:

~~~~
$ ./mario
#####
#####
#####
#####
#####
~~~~

The height and the width of the block are equal: both have size 5. How do you get from your previous program to this block? Well, observe that this block is nothing more than 5 times the same line! So, you would need to repeat the whole program 5 times, right? Think how you might use another loop to accomplish this. Exactly which part of the program needs to be repeated?

Ideally, you now have two loops: one which loops for every line that should be printed, and one that loops over the number of hash marks that is printed on each line. And not only that, the loops are **nested:** one is *inside* the other.

### 5. Left pyramid

Time to crunch your brain a little bit! To make a pyramid from a block, you'll need to notice that the number of hash marks varies on each line:

~~~~
$ ./mario
##
###
####
#####
######
~~~~

So you will need to change the loop that determines the number of hashes that are printed on a single line. Instead of taking `size` each time, it needs to be **dependent** on the line number. But don't change the loop that determines the number of lines printed. That should still be the same as before. Ask for help if needed!

### 6. Right pyramid

Now how do we get that pyramid to right-align? It's a simple trick: the program needs to print **spaces** at the start of each line. If you print a space, it takes up... space, but you can't see it. Perfect!

Like the number of hashes, the number or spaces also varies per line of output:

~~~~
$ ./mario
    ##
   ###
  ####
 #####
######
~~~~

To get started, you might duplicate the loop that prints hash marks on a single line. In the duplicated loop, change the `#` into a space. And think about how the number of spaces on each line is related to the line number that is being printed. It's different from the number of hash marks.


### 7. Testing

Odds are that you have tested your program only for size 5 until now. So this is the time to check if you can again change the variable `size` to another number and that your program still works correctly. Compare to the examples atop this document! If stuck on a bug, be sure to ask for help.


## Specification

Now that your basic algorithm is done, we need to take a look at the formal requirements for our program. As it happens, there are some extra elements that we didn't take into account yet.

* To make things more interesting, first prompt the user for the half-pyramid's height, a non-negative integer no greater than `23`. (The height of the half-pyramid pictured above happens to be `8`.)
* If the user fails to provide a non-negative integer no greater than `23`, you should re-prompt for the same again. A perfect case for using a `do`-`while` loop!
* Then, generate (with the help of `printf` and one or more loops) the desired half-pyramid.
* Take care to align the bottom-left corner of your half-pyramid with the left-hand edge of your terminal window.


## Usage

When you have taken into account all of the formal requirements in the specification, your program should behave exactly like in the examples below. A user starts `./mario`, types a height and ENTER, and then your program prints a pyramid of the desired height.

~~~~
$ ./mario
Height: 4
   ##
  ###
 ####
#####
~~~~

~~~~
$ ./mario
Height: 0
~~~~

~~~~
$ ./mario
Height: -5
Height: 4
   ##
  ###
 ####
#####
~~~~

~~~~
$ ./mario
Height: -5
Height: five
Height: 40
Height: 24
Height: 4
   ##
  ###
 ####
#####
~~~~


## Testing

Before submitting, we expect you to take care that your program is as well-polished as possible. For some final feedback, use the `check50` and `style50` tools per the examples below!


### Correctness

~~~~
check50 mario/less@minprog/checks
~~~~


### Style

~~~~
style50 mario.c
~~~~


## Submitting

1. When ready to submit, log into [CS50 IDE](https://ide.cs50.io/).

2. Toward CS50 IDE's top-left corner, within its "file browser", control-click or right-click your `mario.c` file (that's within your `pset1` directory) and then select **Download**. You should find that your browser has downloaded you file `mario.c`.

3. Make sure you are signed in to this website!

4. In the form below, browse for the file that you downloaded.

5. Press "Submit for grading". Presto!
