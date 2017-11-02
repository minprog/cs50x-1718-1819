# Strings

## Background

You might want to have another look at pointers before you start. Have a look a this video:

![embed](https://www.youtube.com/watch?v=8VAhORT0ZW8)

## Getting started

If you haven’t done so yet, create a directory called `practice` in your workspace:

    mkdir ~/workspace/practice

Execute in a terminal window:

    mkdir -p ~/workspace/practice/pointers
    cd ~/workspace/practice/pointers/
    wget https://cs50x.mprog.nl/course/practice/40%20strings/pointers.zip
    unzip pointers.zip
    rm pointers.zip

## Goal

Getting a better understanding of how pointers work by applying various concepts from the sections.

## Awesome Mix I

Open up `pointer.c`. Here, we provided you with a string, nothing much. Remember that strings are effectively pointers to a character array. The syntax of pointers in C is a bit tricky. You might want to have another look at it: [https://study.cs50.net/pointers](https://study.cs50.net/pointers).

### 1

In line 8, assign the variable `point` so that it holds the *memory adress* for the first character of string `s`.

### 2

In line 12, change the variable point with 5.

### 3

In line 14, print the string point.

### 4

In line 16, print the character point.

### 5

Answer the following questions:

> What does changing point with 5 do?

> What is the difference between exercise 3 and 4?


