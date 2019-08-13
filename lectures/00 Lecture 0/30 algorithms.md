---
title: Algorithms
description: Explanation of algorithms as step-by-step instructions, as well as pseudocode.
keywords:
  - algorithms
  - pseudocode
---

## Algorithms

*   So now we can represent inputs and outputs. The black box earlier will contain _algorithms_, step-by-step instructions for solving a problem:  

    ![box with word "algorithms"](algorithms.png){:.w200}

*   Let's say we wanted to find a friend, Mike Smith, in a phone book.

    *   We could start by flipping through the book, one page at a time, until we find Mike Smith or reach the end of the book.

    *   We could also flip two pages at a time, but if we go too far, we'll have to know to go back a page.

    *   But the most efficient way would be opening the phone book to the middle, decide whether Mike will be in the left half or right half of the book (because the book is alphabetized), and immediately throw away half of the problem. We can repeat this, dividing the problem in half each time.

*   In fact, we can represent the efficiency of each of those algorithms with a chart:  

    ![chart with: "size of problem" as x-axis; "time to solve" as y-axis; red, steep straight line from origin to top of graph labeled "n"; yellow, less steep straight line from origin to top of graph labeled "n/2"; green, curved line that gets less and less steep from origin to right of graph labeled "log n"](running_time.png){:.w400}

*   Our first solution, one page at a time, is like the red line: our time to solve increases linearly as the size of the problem increases.

*   The second solution, two pages at a time, is like the yellow line: our slope is less steep, but still linear.

*   Our final solution, is like the green line: logarithmic, since our time to solve rises more and more slowly as the size of the problem increases. In other words, if the phone book went from 1000 to 2000 pages, we would need one more step to find Mike. If the size doubled again from 2000 to 4000 pages, we would still only need one more step.

## Pseudocode

*   We can write _pseudocode_, an informal syntax that is just a more specific version of English (or other human language) that represents our algorithm:

    <pre> 0 pick up phone book
     1 open to middle of phone book
     2 look at names
     3 if Smith is among names
     4     call Mike
     5 else if Smith is earlier in book
     6     open to middle of left half of book
     7     go back to step 2
     8 else if Smith is later in book
     9     open to middle of right half of book
    10     go back to step 2
    11 else
    12     quit
    </pre>

*   Some of these lines start with verbs, or actions. We'll start calling these _functions_:

    <pre> 0 **pick up** phone book
     1 **open to** middle of phone book
     2 **look at** names
     3 if Smith is among names
     4     **call** Mike
     5 else if Smith is earlier in book
     6     **open** to middle of left half of book
     7     go back to step 2
     8 else if Smith is later in book
     9     **open** to middle of right half of book
    10     go back to step 2
    11 else
    12     **quit**
    </pre>

*   We also have questions that lead to different paths, like forks in the road, which we'll call _conditions_:

    <pre> 0 pick up phone book
     1 open to middle of phone book
     2 look at names
     3 **if** Smith is among names
     4     call Mike
     5 **else if** Smith is earlier in book
     6     open to middle of left half of book
     7     go back to step 2
     8 **else if** Smith is later in book
     9     open to middle of right half of book
    10     go back to step 2
    11 **else**
    12     quit
    </pre>

*   And the answers to questions that decide where we go are called _Boolean expressions_, which eventually result to a value of true or false:

    <pre> 0 pick up phone book
     1 open to middle of phone book
     2 look at names
     3 if **Smith is among names**
     4     call Mike
     5 else if **Smith is earlier in book**
     6     open to middle of left half of book
     7     go back to step 2
     8 else if **Smith is later in book**
     9     open to middle of right half of book
    10     go back to step 2
    11 else
    12     quit
    </pre>

*   Finally, we have words that lead to cycles, where we can repeat parts of our program, called _loops_:

    <pre> 0 pick up phone book
     1 open to middle of phone book
     2 look at names
     3 if Smith is among names
     4     call Mike
     5 else if Smith is earlier in book
     6     open to middle of left half of book
     7     **go back to step 2**
     8 else if Smith is later in book
     9     open to middle of right half of book
    10     **go back to step 2**
    11 else
    12     quit
    </pre>
