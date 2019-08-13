# Beatles

## Getting started

    mkdir -p ~/workspace/practice/beatles
    cd ~/workspace/practice/beatles/
    wget https://cs50x.mprog.nl/course/practice/40%20beatles/beatles.zip
    unzip beatles.zip
    rm beatles.zip

## Goal
Write a program that prints the following information:

    The members of The Beatles are:
    Name:       John
    Instrument: guitar, vocals
    Born:       1940
    
    Name:       Paul
    Instrument: bass, vocals
    Born:       1942
    
    Name:       George
    Instrument: guitar, vocals
    Born:       1943
    
    Name:       Ringo 
    Instrument: drums
    Born:       1940

We're going to use structs to accomplish this. 

## 1, John
The first goal is to create and print a musician struct variable for John.

The file `beatles.c` starts with the definition of a `musician` struct:

    typedef struct {
        char* name;
        char* instrument;
        int year_born;
    } musician;

The struct contains three fields: `name`, `instrument` and `year_born`. Next the file contains an empty `main()` function. This will be implemented by you.

### Step 1: 
Create a musician: Declare a variable with the name `john` of type `musician`.

### Step 2:
Set its the `name` field of `john` to `"``John``"`, the `instrument` field to `"``guitar, vocals``"`, and the `year_born` field to `1940`.

### Step 3:
Now it's time to make a print function for the musician: Create a new function, `void print_musician(musician m)`. (Make sure to add the prototype for this function atop the `beatles.c`.)
Implement this function in such a way that if we call it, the output will something like this:

    Name:       John
    Instrument: guitar, vocals
    Born:       1940

### Step 4:
In the `main` function, add the line:

    print_musician(john);

### Step 5:
Compile and test. Does the function print `john` as shown above?

Congratulations you finished the first challenge!

## 2, Beatles
Now let's add the other Beatles. Of course we're not going to create 4 variables for each individual, but an array that will contain all 4 Beatles. 

### Step 1:
Remove the variable `john` and instead create a `musician` array with the name `beatles`.

### Step 2:
Add the information of the individual Beatles to the array. (This may be hard-coded. No need to ask for user input.)

### Step 3: 
Now write a for loop that prints the name of all the Beatles using your  `print_musician` function.

## 3, A heap of Beatles

As of yet, we haven't used `malloc`. For this example that was not really needed. But, often when we use structs we want to have more control over the memory allocation. This will be particularly important for *pset5*. So, let's use the occasion to get some practice with this. 

### Malloc?
Before you start implementing let's have another look at `malloc`. 

Remember that every value that you use in a program is stored somewhere in the memory. Have a look at the following code segment:

    int i = 42;
    printf("Pointer: %p\n", &i);
    printf("Value:   %i\n", i);

This segment has the following output:

    Pointer: 0x7ffeb861a38c
    Value:   42

- Line 1: We declare the variable `i` and set it's value to `42`. This value is stored somewhere in the memory of the computer. 
- Line 2: We can ask at precisely which memory address the value of `i` is stored by using the `&`  operator. 
- Line 3: Here we simply print the value of `i` itself.

We can achieve exactly the same result with pointers:

    int* i = malloc(sizeof(int));
    *i = 42;
    printf("Pointer: %p\n", i);
    printf("Value:   %i\n", *i);
    free(i);

Output:

    Pointer: 0x1bf8010
    Value:   42

- Line 1: Instead of declaring an `int` we declare a pointer `int*` called `i`. With the function `malloc` we reserve enough space in the memory to store an integer value (i.e., 4 bytes). The function gives us the *address* of this part of the memory. This address is assigned to `i`. So here `i` does not contain a value, but a memory address. 
- Line 2: We use the `*` operator to write `42` into this location of the memory. 
- Line 3: Here we print the pointer (the memory address). Note, that we don't need to use the `&` operator this time, because `i` is already a pointer.
- Line 4: In order to print the value at the memory address of `i`, we need to use the `*` operator again (like we did on line 2).
- Line 5: Since we explicitly allocated memory on line 1, we also have to manually free it, using the function `free`.

### Step 1:
Now we're not going to use pointers for integers, but for musicians. First get rid of the previous work and start with a clean file. Comment out the code that you wrote before, delete it, or save it under `musicians-old.c`, and start anew with an empty main-function.

### Step 2:
In order to use `malloc`, we need to include the library `stdlib.h`.

### Step 3:
We're going through the same steps as before, but now with pointers. Create a `musician` pointer variable, and call it `john`. Reserve enough memory for this pointer using `malloc` and `sizeof`

### Step 4:
Assign the values to the fields of `john`. Remember that you're working with pointers and you can use the `*` operator to get the value of a pointer.

### Step 5:
Adapt the `print_musician` so that it works with pointers.

### Step 6:
Add `print_musician(john)` to the `main`, and check if your program works.

### Step 7:
Now let's make an array for all the Beatles. In the previous exercise you created a `musician`  array. This time, it should of course be a `musician` *pointer* array.

### Step 8:
Recreate the for loop from the previous exercise to print all names.

Congratulations you're done! 

