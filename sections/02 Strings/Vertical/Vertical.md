# Vertical

# Goal

Write a program that takes a string from the user and prints each character of the string on a new line. As per the output below (where the underlined text is the user input):


    $ ./vertical
    Type something: horizontal
    h
    o
    r
    i
    z
    o
    n
    t
    a
    l


# Specification
- Write, in a file called `vertical.c` in your `~/workspace/section2/` directory.
- Ask the user for a text input.
- Then, print (with the help of `printf` and a loop) the vertical text.
- Compile the file with the command `make vertical`.


# Tips
1. Remember that you can use the function `get_string()` from the cs50 library to ask the user for input.
2. In C, a string is always terminated by the `\0` character. You can use this to know when to stop printing.

