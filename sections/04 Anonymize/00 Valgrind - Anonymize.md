# Section 4: Valgrind and anonymize

For this section you (and two others) will complete up to two exercises (if it fits within the timeframe). You will first tackle an exercise about Valgrind, after which (if there is still time) your group will attempt to anonymize a picture.


## What to do?

1. Debug using [Valgrind](#valgrind)
2. Implement [Anonymize](#anonymize)


## Valgrind {#valgrind}

Your goal is to debug a program using valgrind. The program compiles and runs as expected, but alas, valgrind shows some errors.

### Getting started

First create a new directory and `cd` into it:

    mkdir ~/workspace/section4
    cd ~/workspace/section4

Then, download the files for this problem:

    wget https://cs50x.mprog.nl/course/sections/04%20Anonymize/valgrind.zip
    unzip valgrind.zip
    rm valgrind.zip
    cd valgrind

### Specification

Debug the program `valgrind.c` so that valgrind shows no errors on completion. The program `./valgrind` expects one command line argument, your name. Once it starts, it will welcome the user, get the users favourite numbers from a `.txt` file, and then reads those numbers out to the user.

For this assignment you don’t have to worry about the user input. You may assume that the user will input only their first name.

### Hints

Use the [valgrind quick start guide](http://valgrind.org/docs/manual/quick-start.html) for some hints on how to use this tool.


## Anonymize {#anonymize}

Your goal is to modify an image. You'll take the image of a suspicious individual and cover their eyes with a black bar.

### Getting started

First create a new directory and `cd` into it:

    mkdir ~/workspace/section4
    cd ~/workspace/section4

### Downloading

    wget https://cs50x.mprog.nl/course/sections/04%20Anonymize/anonymize.zip
    unzip anonymize.zip
    rm anonymize.zip
    cd anonymize

## Specification

In this assignment you learn how to modify a bitmap image. You need to implement a program that covers the eyes of a suspect's photo with a black bar.

- We have provided a photo of the suspect called `suspect.bmp`. You need to make a copy of this image, but change some pixels so the image is censored with a black bar over the suspect's eyes.
- If you open `suspect.bmp` in the IDE you can make a selection and see the coordinates of your cursor.
- **It is ok to hardcode the program (the coordinates of the black bar) to only work for this image.**
- We have already taken care of error checking the user input for you.

## Background

As you may know an RGB colour is often represented in [hexadecimal](https://en.wikipedia.org/wiki/Hexadecimal) notation, which is wat we want you to use in this assigment as well. The color white `ffffff` means red: `ff`, green: `ff`, blue: `ff`. `ff` in decimal notation is `255`, which is why white can also be written as `(255,255,255)`. In C you can represent a hexadecimal value bij putting `0x` in front of it. `255` can thus be written as `0xff`.

### `anonymize.c`

We've put together a program that copies a bmp file to a new file. Take a look at `anonymize.c`. For this assigment you don't have to understand what every line does yet, but notice that it loops over the width and height of the input image. Inside that loop it reads a triple from the input file, calls the function `process_pixel`, and writes another triple to the output file. You do not need to change this file.

### `censor.h`

Now open up `censor.h`. This is a header file that defines the structures needed for `anonymize.c`. Scroll to the bottom and look at the struct called `RGBTRIPLE`. This is the representation of a pixel. As you can see it consists of a red, a green, and a blue variable, just like an RGB pixel does. At the end of the file is the declaration of the `process_pixel` function.

### `censor.c`

Inside `censor.c` is the function `process_pixel`. This function takes as arguments the current pixel of the input file, as well as its vertical and horizontal location. It returns the changed pixel.
Makefile
A makefile is a file that tells the computer how to compile a program that is made up of different files. You can look at it, but shouldn't change anything.

### TODO

Now it is up to you to implement `process_pixel` inside `censor.c`. Which pixels need to be changed? And how can you change them?

## Usage

If you want to change your program you can make it by either calling `make` ```anonymize` or just `make`. The makefile will do the rest. You can now run the program, for example like this:

    ./anonymize suspect.bmp censored.bmp

## Done?

Got time left? Improve your program so it is not hardcoded for `suspect.bmp`. You are now permitted to change anything you need in `anonymize.c`, `censor.c` and `censor.h` to allow the user to input coordinates for the black bar.


