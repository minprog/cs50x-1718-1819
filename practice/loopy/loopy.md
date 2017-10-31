# Loopy

## Goal

The objective of this exercise is to become more comfortable with different loop constructions in C.

## Getting started

If you haven’t done so yet, create a directory called `practice` in your workspace:


    mkdir ~/workspace/practice

Create a directory `loopy` in `practice` and step into it:


    mkdir ~/workspace/practice/loopy
    cd ~/workspace/practice/loopy

## For a while

Did you know you can always translate for loops into while loops and vise versa?
Try to change to `for` loop into a `while` loop for the following C program:


    #include <stdio.h>
    
    int main(void)
    {
        for(int i = 0; i < 10; i++)
        {
            printf("i = %i\n", i);
        }
    }

###Step 1:
Before you run the program above, try to write down for yourself what the output will be.

###Step 2:
Create a new file called `forawhile.c` in the folder `loopy`. Copy the code above into it. Compile and run. Does the output match your expectation?

###Step 3:
Write the same program, but using a `while` loop instead of a `for` loop. Compile and test. Does the output exactly match the output of the original program?


## Upside down

Your goal is to write a loop that gives the following output:


    1 4
    2 3
    3 2
    4 1
    5 0

###Step 1:
Create a new file called `upsidedown.c` in the folder `loopy`. 

###Step 2:
Copy the following code into the file.


    #include <stdio.h>
    
    int main(void)
    {
        int h = 5;
    
        // print successive numbers from 1 to h (inclusive)
    }

###Step 3:
Print the numbers `1` to `h` (inclusive), each on a new line. (Use a loop for this.) The output should look like this:


    1
    2
    3
    4
    5

###Step 4:
Now do the reverse: Print the numbers `h-1` to `0`. Try to do this without changing the structure of the loop too much. The output should look like this:


    4
    3
    2
    1
    0

###Step 5:
Now do both at the same time:


    1 4
    2 3
    3 2
    4 1
    5 0

## Rehash

Remember Mario? We’re going to do something similar, but we make it a bit more challenging, for both Mario and you. Your goal is to create a pyramid of which each step is twice as high as the original Mario assignment:


        #
        #
       ##
       ##
      ###
      ###
     ####
     ####
    #####
    #####

###Step 1:
Create a new file called `rehash.c` in the folder `loopy`. 

###Step 2:
Copy the following code into the file:


    #include <stdio.h>
    
    int main(void)
    {
        int h = 5;
    
        // print h hashes:
    }

###Step 3:
Complete the program. The first step is to print `h` hashes in a row. Compile and test your program before continuing!

###Step 4:
Now try write a program that prints `h` rows of `h` hashes. The output should look something like this:


    #####
    #####
    #####
    #####
    #####

Compile and test!

###Step 5:
Now adapt the program in such a way that it prints an increasing number of hashes. Like this:


    #
    ##
    ###
    ####
    #####

Compile and test!

###Step 6:
Now print the appropriate number of spaces to get the original mario pyramid:


        #
       ##
      ###
     ####
    #####

###Step 7:
Now for the extra challenge, make the pyramid twice as high:


        #
        #
       ##
       ##
      ###
      ###
     ####
     ####
    #####
    #####

## Extra challenge:

Can you also make the pyramid twice as large?


            ##
            ##
          ####
          ####
        ######
        ######
      ########
      ########
    ##########
    ##########


