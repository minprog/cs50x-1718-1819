# Recrypt

## Goal

Get some more practice with manipulating strings and ascii arithmetic.

## Getting Started

If you haven't done so yet, create a directory called `practice` in your workspace:

    mkdir ~/workspace/practice

## Strlen, no strlen

Implement the functionality of `strlen` yourself.

### Step 1
Create a file called `strlen.c` in `practice`, and copy the code below into it:


    #include <stdio.h>
    #include <cs50.h>

    int main (void)
    {
        printf("Enter text: ");
        string s = get_string();

        int string_length = 0;

        // TODO: Enter code to determine length of string (don't use strlen).

        printf("Length:     %i\n", string_length);
    }

### Step 2
Write some code that computes the length of the input string.

### Step 3
Compile and test. You should get something like this:

    Enter text: Star Lord
    Length:     9

## Shifty

Write a program that shifts all the characters of an input string one place to the left. Example:

    Enter text: Star Lord
    Shifted:    tar Lordd

There is an edge-case to consider. What happens with the first and last character? You can choose to throw away the first character and duplicate the last character like in the example above. If you want to be fancy you can also choose to put the first character at the end of the string like this:

    Enter text: Star Lord
    Shifted:    tar LordS

It is up to you.

### Step 1
Create a file called `shifty.c` in the directory `practice` and copy the code below into it.

    #include <stdio.h>
    #include <cs50.h>
    #include <string.h>

    int main (void)
    {
        printf("Enter text: ");
        string s = get_string();

        // TODO: Shift string

        printf("Shifted:    %s\n", s);
    }

### Step 2
Implement the `TODO` part. Compile your program and test.

## Encrypt

Your objective is to write two simple encryption programs.

### Alphabetic vowel shift
Create a file called `alpha-shift.c` in `practice`. Write a program that asks the user for an input text and shift all its vowels to the next character in the alphabet: ‘a' becomes ‘b', ‘e' becomes ‘f', etc. Example:

    Enter text: Star Lord
    Encrypted:  Stbr Lprd

### Indexical vowel shift
Create a file called `index-shift.c` in `practice`. Write a program similar to the previous exercise, but instead of moving the vowels to the next character in the alphabet, you change the vowel to the next character in the string. So for the input "Star Lord", the ‘a' becomes ‘r' and the ‘o' also becomes an ‘r':

    Enter text: Star Lord
    Encrypted:  Strr Lrrd

There is an edge-case in this program. What happens if the last letter is a vowel? In this case, it will be changed to the first letter of the string, like so:

    Enter text: Radio
    Encrypted:  RddoR

## Alpha-modulo

Twenty-six letters in an alphabet is too much. We would like to be able to reduce this. The goal of this exercise is to map words to a smaller alphabet. The program you're about to make will accept a number `n` between `1` and `26` as command line argument. Your going to map an input text to that number of characters. If `n` is `1`, every character of the word will be mapped to `a`. If n is `26`, the input text will be left as is.

The idea is to use a ‘modulated' alphabet. For example, let's say `n` is 2, you'll only have the characters  `a` and `b`. You can map all other characters by ‘modulating' them down: ‘a' will stay ‘a', ‘b' will stay ‘b', ‘c' will become ‘a', and ‘d' will map to ‘b', ‘e' to ‘a' again, etc.

Have a look at these two examples:

    ./alpha-modulo 4
    Enter text: abcdefghi
    Encrypted:  abcdabcda

    ./alpha-modulo 3
    Enter text: supercalifragilisticexpialidocious
    Encrypted:  acabccaccccaacccabccbcacaccaccccca

**For this exercise you may assume that your input consists of only lower case alphabetic characters!**

### Step 1
Create a new file called `alpha-modulo.c` in the directory `practice` and copy the following code into it:

    #include <stdio.h>
    #include <cs50.h>
    #include <string.h>

    #define LENGTH_ALPHABET 26

    int main (int argc, char** argv)
    {
        if(argc != 2)
        {
            printf("Usage: %s [number]\n", argv[0]);
            return 1;
        }

        int n = atoi(argv[1]);

        if(n < 1 || n > LENGTH_ALPHABET)
        {
            printf("Enter a number between 1 and %i\n", LENGTH_ALPHABET);
            return 2;
        }

        printf("Enter text: ");
        string s = get_string();

        // Todo: modulate s

        printf("Encrypted:  %s\n", s);
    }


### Step 2
Before starting to implement this, try to think how you're going to do this mapping. There is a very simple way of doing this. The code that you add doesn't have to be more than 3 lines.

### Step 3
Implement your solution, and test. Do you get the same output as the examples?
