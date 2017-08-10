# BS Tree

# Goal

For this assignment your team will write a function in C which inserts leaves/nodes into a binary search tree in C. Remember binary search trees? Here’s David explaining them:

https://video.cs50.net/2016/fall/lectures/5?t=1h0m59s

# Getting started

Create a new directory and step into it.


    $ mkdir ~/workspace/section5
    $ cd ~/workspace/section5
## Download

Download the required files for this assignment.


    $ wget https://cs50x.mprog.nl/course/sections/05%20BS%20Tree/BS-Tree.zip
    $ unzip binary-tree.zip
    $ rm binary-tree.zip
    $ cd binary-tree
    $ ls
    binary-tree.c
## Compiling and running

Start by compiling and running the `binary-tree`:


    $ make binary-tree
    $ ./binary-tree

When you run the program, it prints the following tree:


    ---->(3)--->(42)-->*
           |       |
           |       `-->*
           |
           `---->(1)---->(2)-->*
                   |       |
                   |       `-->*
                   |
                   `-->*

This shows a hand constructed example (i.e., it is not using the `insert` function). In this tree, the right node is printed directly to the right, and the left node is printed below. For example, the right node for `3` is `42` and the left node is `1`. NULL-pointers are printed as a `*`. So, for example, node `42` and `2` have no children.

# Specification
- Implement the function `insert`. The function should be implemented such that the tree remains sorted at all times. For any node with `key_value` v, all nodes in the left sub-tree should have a smaller key_value`, and all nodes in the right sub-tree should have a bigger value.
- Adapt the `main` function in such a way that it creates a tree from the values in `array`, using the `insert` function.

If you constructed the tree correctly, it should look something like this:


    ---->(8)--->(15)--->(19)-->*
           |       |       |
           |       |       `--->(18)-->*
           |       |               |
           |       |               `--->(16)--->(17)-->*
           |       |                       |       |
           |       |                       |       `-->*
           |       |                       |
           |       |                       `-->*
           |       |
           |       `--->(12)--->(13)--->(14)-->*
           |               |       |       |
           |               |       |       `-->*
           |               |       |
           |               |       `-->*
           |               |
           |               `--->(11)-->*
           |                       |
           |                       `--->(10)-->*
           |                               |
           |                               `---->(9)-->*
           |                                       |
           |                                       `-->*
           |
           `---->(7)-->*
                   |
                   `---->(2)---->(5)---->(6)-->*
                           |       |       |
                           |       |       `-->*
                           |       |
                           |       `---->(4)-->*
                           |               |
                           |               `---->(3)-->*
                           |                       |
                           |                       `-->*
                           |
                           `---->(0)---->(1)-->*
                                   |       |
                                   |       `-->*
                                   |
                                   `-->*


# Walkthrough

The file `binary-tree.c` already contains quite a bit of code. 

## array

The first lines (after the library `#include`'s) define the array of numbers that you will have to use to construct your tree:

    /* array with numbers to be inserted into the tree */
    #define ARRAY_SIZE 20
    int array[ARRAY_SIZE] = {8, 7, 15, 2, 19, 18, 0, 12, 11, 10, 16, 13, 14, 17, 5, 6, 4, 1, 3, 9};
## node

The next part of the code is the declaration of the node struct:


    /* The node struct */
    typedef struct node
    {
            int key_value;
            struct node *left;
            struct node *right;
    } node;

This is the main building block for the search tree. The struct has three fields: 

- `key_value` of the type `int`, which stores the actual value of the node.
- `left`, a pointer that points to the left child of this node. 
- `right`, a pointer that points to the right child of this node. 

Note that a node does *not* always have a left or right child. If the node for instance does not have a left child, the `left` pointer should be set to `NULL`. The same goes for the right child. If the node doesn’t have any children at all, both pointers should be set to `NULL` and we call such a node, a *leaf*.

## provided functions

To get you started we’ve already implemented a couple of functions for you:


    /* Declaration of provided functions */
    node* create_an_example_tree();
    node* create_node(int value);
    void print_tree(node* tree);

The function `create_an_example_tree()` is only there to get you started. Once you’re done with this assignment you should be able to remove this function. It can be helpful to look at the content of this function to get a better understanding of how to build a tree.

The function `create_node` creates, you guessed it, a new node. It allocates the memory for the node, initializes the fields.

Seeing is understanding. The `print_tree` function can be very useful to inspect the results of your efforts. 

## insert

The next line is the declaration of the `insert` function that you will have to implement.

    // TODO: implement insert
    void insert(int key, struct node* tree);

Before you start implementing `insert` it could help to first look at the `main()` function. You’ll have to comment out one line before you can proceed.

## main

The `main()` function has already been implemented for you. But, you’ll have to modify it a bit.

The first line creates a root node containing the first element of the array.

    node* root = create_node(array[0]);

The next part uses the insert function to add the remaining elements to the tree.

    for(int i = 1; i < ARRAY_SIZE; i++)
    {
      insert(array[i], root);
    }

In order to get you started the next line creates an example tree. **You have to comment out this line** before you start testing.

    // TODO: Comment out this line!!!
    root = create_an_example_tree();

Lastly, the tree is printed.

    // print result
    print_tree(root);

