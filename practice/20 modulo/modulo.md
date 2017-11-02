# Modulo

## Goal

Get some practice with integer division and modulo.

## Getting started

If you haven’t done so yet, create a directory called `practice` in your workspace:


    mkdir ~/workspace/practice

Create a directory `modulo` in `practice` and step into it:


    mkdir ~/workspace/practice/modulo
    cd ~/workspace/practice/modulo

## Paper

Do you rember modulo? If not have another look at the [lecture notes of week 1](https://cs50x.mprog.nl/lectures/week-1). The last section shows an example of the use of modulo. Also, take a look here: [https://study.cs50.net/math](https://study.cs50.net/math). On slide 8, modulo is explained.

Before we start programming, let’s do some pen and paper exercises. 

Give the value of x and y:

###1
int x = 17/3;
int y = 17%3;

###2
int x = 5/2;
int y = 5%2;

###3
int x = 12/4;
int y = 12/4;

###4
int x = 12/3;
int y = 12%3;


## Minicrypto

We’re going to write a program that finds the divisors of a number. Example output:


    Number:   18
    Divisors: 1 2 3 6 9 18 

When you enter the number `18` into this program, it shows that it’s divisible by the numbers `1` (all numbers are), `2`, `3`, `6`, `9`, and `18` (itself).

Finding the divisors of a number is a problem that you’ll run across a lot in computer science, most notably in the cryptography that keeps our internet communication secure.  

###Step 1:
Create a new file in the directory `modulo` called `divisors.c`. Copy the following code into it:


    #include <stdio.h>
    #include <cs50.h>
    
    int main()
    {
        int number;
    
        printf("Number:   ");
        do
        {
            number = get_int();
        } while (number < 1);
    
        //TODO: Test if number is divisible by 2
    }

###Step 2:
First write code that tests if the number entered by the user is divisible by `2` (i.e. if the number is even), such that it gives the following output:


    Number:   42
    The number 42 is even!

or:


    Number:   17
    The number 17 is odd!

###Step 3:
Now write a loop that test for every number between `1` and the provided number if it is a divisor of the provided number.

Examples:


    Number:   17
    Divisors: 1 17


    Number:   18
    Divisors: 1 2 3 6 9 18 


    Number:   138
    Divisors: 1 2 3 6 23 46 69 138 

