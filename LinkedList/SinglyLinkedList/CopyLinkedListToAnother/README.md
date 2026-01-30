# Singly Linked List Copy in C

This C program demonstrates how to create a singly linked list, display it, and copy it into another linked list.

## Features

- Create a singly linked list by inserting nodes at the end.
- Display the elements of the linked list.
- Copy the entire linked list into a new linked list (deep copy).
- Display the copied linked list to verify the copy operation.

## Code Structure

- **`struct NODE`**: Defines the node structure with an integer `data` and a pointer to the next node.
- **`createNode(int value)`**: Allocates memory and initializes a new node.
- **`insertEnd(struct NODE *head, int value)`**: Inserts a new node with the given value at the end of the linked list.
- **`display(struct NODE *head)`**: Prints the linked list in the format: `data1->data2->...->NULL`.
- **`copyList(struct NODE *head)`**: Creates a deep copy of the given linked list and returns the head of the new list.

## How to Use

1. Compile the code using a C compiler, for example:
   ```bash
   gcc linked_list_copy.c -o linked_list_copy
Run the executable:

./linked_list_copy


Input the number of nodes and their values as prompted.

The program will display the original linked list and its copied version.

Example Output
How many nodes?
3
Enter the value of node 1: 10
Enter the value of node 2: 20
Enter the value of node 3: 30
Original Singly Linked List:
10->20->30->NULL
Copied Singly Linked List:
10->20->30->NULL