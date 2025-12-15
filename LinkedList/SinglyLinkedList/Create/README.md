# Linked List Creation, Printing, and Counting in C

This program demonstrates the creation, printing, and counting of elements in a singly linked list using recursion in C.

## Features
- Dynamically creates a linked list by user input.
- Prints the linked list elements in order.
- Counts the number of elements in the linked list.

## How It Works
- The user is prompted to enter integers one by one.
- Entering `-999` signals the end of the list input.
- The program recursively creates nodes for each entered number.
- After creation, the list is printed in a format like `1-->2-->3`.
- The total number of nodes (excluding the terminating `-999`) is displayed.

## Code Overview

### Data Structure
```c
struct linked_list {
    int number;
    struct linked_list *next;
};
typedef struct linked_list node;

Functions
void create(node *p): Recursively builds the linked list based on user input.

void print(node *p): Recursively prints the linked list.

int count(node *p): Recursively counts the number of nodes in the list.

Usage
Compile the code with a C compiler:

nginx
Copy code
gcc linked_list.c -o linked_list
Run the executable:

bash
Copy code
./linked_list
Enter numbers to add to the list. Type -999 when you want to stop input.

Sample Output
mathematica
Copy code
--Create and print linked list--
Input a number:
5
Input a number:
10
Input a number:
15
Input a number:
-999
5-->10-->15
Number of items = 3