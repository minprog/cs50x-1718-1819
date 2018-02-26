# Exercise 1: Valgrind {#valgrind}

## Goal

Debug a file using Valgrind. The file compiles and runs as expected, but Valgrind shows some errors.

## Getting started

First create a new directory and step into it:


    mkdir ~/workspace/section4
    cd ~/workspace/section4

### Downloading

    wget https://cs50x.mprog.nl/course/sections/04%20Anonymize/valgrind.zip
    unzip valgrind.zip
    rm valgrind.zip
    cd valgrind
    ls
    valgrind.c

## Specification

Debug the program `valgrind.c` so that Valgrind shows no errors on completion. Valgrind "is a programming tool for memory debugging, memory leak detection, and profiling.". For more detail, see [Valgrind](http://valgrind.org/).

The program `./valgrind` expects one command line argument, your name. Once it starts, it will welcome the user, get the users favourite numbers from a `.txt` file, and then reads those numbers out to the user.

### Assignment

For this assignment you don’t have to worry about the user input. You may assume that the user will input only his first name.

## Walkthrough

### Compile

You can compile `valgrind.c` by executing the command:


    `make valgrind`

This will create the binary (executable) `valgrind` which you can execute:


    `./valgrind Tim`

In order to check `valgrind.c`, you can execute:


    `valgrind ./valgrind Tim`
