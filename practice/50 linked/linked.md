# Linked

## Goal

Get a better understanding of how linked lists work and implement some basic concepts from the sections.

## Background

Have another look at linked lists with this video:
![embed](https://www.youtube.com/embed/xdkSNe43iNM)

## Getting started

If you haven't done so yet, create a directory called `practice` in your workspace:

    mkdir ~/workspace/practice

Execute in a terminal window

    mkdir -p ~/workspace/practice/linked
    cd ~/workspace/practice/linked/
    wget https://cs50x.mprog.nl/course/practice/50%20linked/linked.zip
    unzip linked.zip
    rm linked.zip

## Data structures

In a simple text file, answer the following question in your own words (preferably in Dutch).

> Explain the difference between a hash table structure and a trie structure

## Linked lists

For this exercise, the task is to build your own linked list. If you are not sure anymore what a linked list is and how to implement one, have a look at the [lecture notes of week 5](https://cs50x.mprog.nl/lectures/week-5). For some additional reading, you might also want to have a look here: [https://study.cs50.net/linked_lists](https://study.cs50.net/linked_lists)

Jump in `linked.c`. We have provided you with a `printList` function which should print your linked list. As you compile and run this program, you see that the function only prints the brackets `[ ]`, which may seem correct since we haven't inserted anything. Yet, if you look at the code you may notice that the crucial part of `printList` is missing.

Finish the function `printList` in such a way that it loops through the linked list and prints out any number in that list. Don't forget to add a space between the numbers, for clarity. 

It's now up to you to insert the numbers `2`, `3`, `4` and `5` in such a way that when you execute `./linked`, the program prints

    [ 2, 3, 4, 5 ]

To do this, implement an insertion method for a linked list in `insert`. Some basics are already there, such as the struct for `node` and a pointer to the head node.

Note: it may be a good idea to first insert _any_ two numbers and test if your `printList` function works as intended.
