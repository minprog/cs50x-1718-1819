# Queue

## Goal

The goal of this assignment is to get familiar with and learn how to use classes in Python. This assignment covers only the basis; take a look at https://www.tutorialspoint.com/python/python_classes_objects.htm for a more in depth introduction. (this is not mandatory)

## Getting started

Create a new directory and step into it.


    $ mkdir ~/workspace/section6
    $ cd ~/workspace/section6

 There are no required files for this assignment.
 
 Create a new file named queue.py. 

### Compiling and running

Python code does not need pre-compiling. You can run queue.py through the following command:


    $ python queue.py

## Specification

A queue is a collection in which the entities in the collection are kept in order and the principle operations on the collection are the addition of entities to the rear, known as enqueue, and removal of entities from the front, known as dequeue. In this assignment you will make a queue that holds numbers. Keep in mind that a queue works on a FIFO basis (First In, First out). 


- Implement `__init__()`. This function should do all preperation for the data structure. Think about what you whould need to hold the numbers in a certain order. Do we know a datastructure that does this?
- Implement `enqueue()`. This function should add numbers to the rear of the queue.
- implement `dequeue()`. This function should return (and delete) the number from the front of the queue.
- Implement `print_queue()`. This function should print the queue. (tip: keep it simple!)
- Implement `clean()`. This function should empty the entire queue.


