#include <stdio.h>
#include <stdlib.h>

// our struct
typedef struct node
{
    int number;
    struct node* next;
} node;

void insert(int number);
void printList();

// pointer to the head node
struct node *head = NULL;

int main (void)
{
    int array[] = {};

    for (int i = 0; i < sizeof(array); i++) {
        insert(array[i]);
    }

    printList();
}

void insert(int number)
{
    // TODO: your code here

    return;
}

// prints a linked list
void printList()
{
    struct node *ptr = head;
    printf("\n[ ");

    // TODO: your code here

    printf("]\n");
}
