# Introduction to Python

## Refresher

You probably need a little refresher on Python. In the video below, have a good look at the basic data types and syntax in Python. You might want to stop at 27:30, after which Doug will talk about classes, which are the topic of another exercise.

![embed](https://www.youtube.com/embed/8xCzjOnfQbw)

## Getting started

Execute in a terminal window

    mkdir -p ~/workspace/practice/python
    cd ~/workspace/practice/python/
    touch exercise.py

## Goal

Getting familiar with basic Python.

### 1.1 Strings

Start the python interpreter by typing `python` in a terminal window. Then create a string variable like so:

    >>> s = 'programming'

Print the first character of s.

Print the last character of s.

Print `'program'` by printing a part of the string s (no new variables).

> If we execute `>>> s[0] = 'C'`, what happens? Why?

### 1.2 Lists

In the interpreter, create a list like so:

    >>> nums = [4,5,2,1]

> What does `nums[-1]` print? And `nums[-2]`?

Add the numbers `6` and `3` to the end of the list.

Print only the last half of the list.

### 1.3 Loops

In `exercise.py`, create a list of animal names. Then, for each animal, print its name and name length.

In the same file, write code to print the numbers 9-1 (counting down) by using a loop.

### 2 Data Structures

Create a new file named `stack.py`. The goal here is to implement a stack in such a way that numbers added to the stack are handled with a LIFO procedure.

- Create a list that will represent your stack.
- Create a variable `max_size` that will represent how large our stack can get. Set it to 10.
- Implement a function `print_stack()` in such a way that when called will print the full stack.
- Implement a function `push` in such a way that it takes in a value and adds it to the stack (but make sure not to exceed the `max_size`!)
- Implement a function `pop` in such a way that it pops the top element of the stack, or, if the stack is empty, shows a message saying so.

Now test your implementation by pushing some numbers, popping some numbers and displaying the stack. Don't forget to intentionally exceed the stack limit to test if that works, too!
