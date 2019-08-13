# Eek {#eek}

## Goal

Write a program that takes a string from the user and tells you how many e's that string contains.. As per the output below (where the underlined text is the user input):


    $ ./eek
    Type something: Eek a mouse!
    The text "Eek a mouse!" contains 3 e's.


## Specification
- Create a file called `eek.c` in your `~/workspace/section2/` directory.
- Ask the user for a text input.
- Then, count (with the help of a loop and an if statement) the amount of e's in the string.
- Compile the program with the command `make eek`.
- Make sure your program can handle both upper and lower case ‘e'.
- Bonus: I always dislike it when a computer program says something ungrammatical like `The text` `"``one``"` `contains 1 e``'``s.`. Make sure it handles the singular case correctly by saying `The text` `"``one``"` `contains 1 e.`, instead.
