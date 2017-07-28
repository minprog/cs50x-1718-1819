# Python Style Guide

As readers of your assignments we'll notice all too soon if it is
well-readable. It influences how quickly we are able to understand the meaning
of the program.

Not only in class but also in practice it proves to be convenient to write
well-readable code. For the sake of someone else having to read your code, and
definitely for yourself, trying to debug the code after a week or so.

There is not one correct way to write code. Still, there's a lot you can do
wrong (or should we say: unreadable). In this course, we require you to adhere
to the rules in this style guide. That said, you are free to change some rules,
provided that you apply the rules consistently and annotate atop your code what
rule you have changed.

## Comments

Too much commenting is wrong. Too little commenting is also wrong! So how do
you do this right? Well, as a rule of thumb, try to divide your code into small
blocks of a few lines each, and add one line of comments above it.

What should you write in your comments? Try to answer relevant questions:

* What is the function of the whole block?
* Why is it implemented like that exactly?

### Example 1

Variables are often self-explanatory because of their well-chosen name. Still,
names can get long if you want to be precise, so a comment can explain a bit
more:

{: .language-python}
    # compute student's average
    average = sum / QUIZZES + 0.5

(So now we know it is not just an average, but the average grade of a student.)

### Example 2

In the middle of your code you shouldn't write whole sentences, but rather
small annotations. Even so, they should be properly formatted in your language
of choice, including spacing and punctuation.

Don't do this:

{: .language-python}
    #compute student's average

But do it like this:

{: .language-python}
    # Compute student's average.

### Example 3

Atop your Python source code, add a comment block summarizing the goal of the
program (what does it do for the user?), and also your name.

{: .language-python}
    # Problem Set 1
    # Name: Jane Lee
    # Collaborators: John Doe
    # Time: 1:30
    #
    # This program calculates the average values of a series
    # of numbers input by the user.

### Example 4

Have another look at the summary in the comments of Example 3. The summary is
fairly long and does not fit a comfortable line's length. People read most
comfortably when lines are about 45-90 characters in length (this also applies
to books and other texts!).

In order to split longer comments into multiple lines, just add another line
starting with a `#`.

## Indentation

Indentation means adding white space to the very start of a line, in order to
show structure. In most programming languages, this is a *convention* to
improve consistency and readability. In Python, indentation is compulsory!

{: .language-python}
    def sum(x, y):
        result = x + y
        return result

### Tabs and spaces

It is very important to use either tabs or spaces for indentation. Do *not* mix
tabs and spaces. Other programmers will not like it at all.

Say you have your computer set at: 1 tab equals 4 spaces. Another programmer
can change this setting to 8 spaces. But now there's a severe problem in
understanding the program:

{: .language-python}
    def sum(x, y):
        result = x + y     # vier spaties
            return result  # 1 tab is hier 8 spaties geworden

Luckily for you, in Python you can't really make this mistake inadvertently,
because Python will complain hard when you do this.

### Compulsory (compulsive) indentation

In Python it is quite easy to know *when* you should indent a line. After a
line that ends in a `:` (colon), all dependent lines should be indented.

{: .language-python}
    # This function consists or 4 lines of code and 1 line of commenting.
    def sum(arrayOfNumbers):
        result = 0
        # This for loop contains exactly 1 line that is repeated.
        # The next line after is unindented.
        for number in arrayOfNumbers:
            result = result + number
        return result

## Naming stuff

Lots of elements in your Python programs will have a *name*: mostly functions
and variables.

### Functions

Function names may be as long as you want. You should separate English words
with underscores like this:

{: .language-python}
    def user_average_this_year():
        ...

### Variables

Variable names are preferably a tad shorter than function names, because they
are used more frequently. Keep those names to one or two words.

There is no good reason to shorten names (unless you are an *extremely* bad
typist). It is allowed, however, to use symbols derived from the domain of your
program, like mathematics.

{: .language-python}
    d = 0.002                   # d is for "delta", which is a difference in mathematics
    remaining_pension -= 2000   # clear name, doesn't need any comment

## White space for readability

Just as in other media that revolve around text, blank lines and white space
may be added to increase clarity of structure, and thus, readability.

### Blank lines

When you split some code into blocks, as described above in "Comments", add a
blank line atop each comment in order to split the code into logical blocks.

Here's three very small blocks of code, each responsible for a particular
function of the program:

{: .language-python}
	# User input
	number = input("Please enter a number: ")
	
	# Calculations - uses a complex loop to handle special cases.
	while(number > 0):
		number -= 1
	
	# Output - might not print zero (e.g., if user put in a float).
	print user_input

### Spaces around operators

Operators are compactly named functions, like `+`, `==`, `%` and `?`. You
should ornament your expressions with spaces in order to make them easy to read.

Simply add one space before, and one space after each operator:

{: .language-python}
    i = i + 1
    submitted += 1
    x = x * 2 - 1
    hypot2 = x * x + y * y
    c = (a + b) * (a - b)
