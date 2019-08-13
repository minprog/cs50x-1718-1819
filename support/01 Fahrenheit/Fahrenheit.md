# Section 1: Fahrenheit

## Goal
The goal of this assignment is to create a program that can convert temperatures from Celcius to Fahrenheit. In this assignment you learn how to create, compile and run a C-program.

## Getting started
First, log into CS50 IDE. If you haven't created an account yet, this is the moment to do so! If you have already created a Cloud9 workspace, you can skip this step and continue with [Update](#update).

### Create a Cloud9 workspace
First, register on [edx.org](https://courses.edx.org/register), which will provide you with an account to log on to the CS50 IDE. If you already have an edX account, it's no problem to use that one.

Now head to [cs50.io](https://cs50.io/) and log into CS50 IDE. You may be prompted (again) for your email address. If so, after providing it, click **Private** under **Hosted workspace**, then click **Create workspace**.

You should then be informed that CS50 IDE (aka Cloud9, the software that underlies CS50 IDE) is "creating your workspace" and "creating your container," which might take a moment. You should eventually see your workspace.

### Create a new folder
Once logged in, execute

    mkdir ~/workspace/section1

at your prompt in order to make a directory called `section1` in your `workspace` directory. Keep in mind that `~` denotes your root directory, `~/workspace` denotes a directory called `workspace` therein, and `~/workspace/section1` denotes a directory called `section1` within `~/workspace`.

Now execute

    cd ~/workspace/section1

to move yourself into (i.e., open) that directory. Your prompt should now resemble the below:

    ~/workspace/section1

### Create a new C-file
You can create a new file using the file browser tab. Under `filesystem`, click on the `workspace` directory to open it. Now right-click on the directory `section1` and select `New File`. Give your file the name `fahrenheit.c`. Now double click on the file to open it.

### Edit
Let's start with something simple. Let's create a program that will print "Hello, world!". Copy the following code into the file:

    #include <stdio.h>

    int main(void)
    {
        printf("Hello, world!\n");
    }

Now save your file (ctrl-s).

### Compile
To compile the file `fahrenheit.c`, go to the terminal (below the file) and type the command below:

    make fahrenheit

This command will look for the file `fahrenheit.c` and compile it. If all is well, you should see an output similar to this:

    clang -fsanitize=integer -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wshadow    fahrenheit.c  -lcrypt -lcs50 -lm -o fahrenheit

This will create an executable file called `fahrenheit`. You can check this by typing the command below:

    ls

This will show all the existing files in the directory. The output should look something like this:

    fahrenheit*  fahrenheit.c

This shows two files: the file `fahrenheit.c` that you created yourself, and the file `fahrenheit` which was created by the make command. (The `*` at the end of the filename indicates that the file is executable).

### Run
You can now run your program, by typing the following command in the terminal:

    ./fahrenheit

This runs your program, and if it is written correctly it should produce the output:

    Hello, world!

Keep in mind that you can use the up and down arrow keys to repeat previously executed commands!

## Specification

### Fahrenheit
Now, the goal of this program is not to print "Hello, world!". Your assignment is to write a program that converts a temperature in Celsius to Fahrenheit, as per the sample output below, wherein `100` represents some user's input.
```
./fahrenheit
C: 100
F: 212.0
```
The formula to compute degrees Celcius (C) to Fahrenheit (F) is:

    F = ((C * 9) / 5) + 32.

To solve this problem, you need not do anything more complex than use your currently existing knowledge of C, and the information contained in this specification, including the temperature conversion formula. No matter how the user inputs the temperature in Celsius (that is, no matter to how many decimal places they choose), take care to display Fahrenheit to *exactly* one decimal place. No need to worry about floating-point imprecision or integer overflow, if you recall what those terms mean.

Bonus: The program now probably ends after one interaction. Can you make the program repeat the interaction? I.e., once the computer has taken the user input and converted it to Fahrenheit, it asks the user for a new input to convert. It continues to do so until the user enters a value of −274 or below.

## Walkthrough

### User input
You will want to ask the user for input. There are inbuilt functions in C to do this, but CS50 has created a library to make this a little bit easier. You can include by adding the following line at the top of your file:

    #include <cs50.h>

This library implements the functions `get_string()`, `get_int()`, and `get_float()`, which ask the user for an input of the corresponding datatype.

For example the program below asks the user to enter their name (a string), and outputs "Hello, <name>!".

    #include <cs50.h>
    #include <stdio.h>

    int main(void)
    {
        printf("Enter your name: ");
        string name = get_string();
        printf("hello, %s\n", name);
    }


### Printing
Know that `printf` can be used to specify how many places after the decimal point you wish to display to the user. For example, assuming you've written the following program in a file called `truncate.c`:

    #include <stdio.h>

    int main(void)
    {
       float pi = 3.1415926535;
       printf("%.2f\n", pi);
    }

When executed (by first compiling with `make truncate` and then executing with `./truncate`), this program will output the value of the variable `pi` to exactly 2 decimal places: `3.14`. Can you see why? Perhaps you can adapt that to display the converted temperature to just one decimal place?
