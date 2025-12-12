🚀 Search an Element in a Singly Linked List (C Program)

This project demonstrates how to create, insert, and search elements in a singly linked list using the C programming language.

📘 Overview

A singly linked list is a dynamic data structure made up of nodes.
Each node contains:

data → integer value

next → pointer to the next node

This program allows the user to:

Create a linked list by entering values

Insert nodes at the end of the list

Search for a specific element

Display whether the element is found and its position

🧩 Features

Dynamic memory allocation

User input for node values

Efficient traversal for insertion and searching

Returns position of element if found

🧱 Code Structure
1. createNode()

Creates a new node and assigns the given value.

2. insertEnd()

Inserts a new node at the end of the linked list.

3. search()

Traverses the list and returns the position of the key if found.
If not found, returns -1.

4. main()

Takes user input

Builds the list

Searches for an element

Displays output

🔍 Sample Input/Output
Input:
Enter number of nodes: 4
Enter 4 elements:
10 20 30 40
Enter the element to search: 30

Output:
Element 30 found at position 3

🛠 How to Compile and Run
Compilation
gcc linkedlist_search.c -o search

Run
./search

📚 Concepts Used

Dynamic Memory Allocation (malloc)

Linked List Basics

Linear Search

Pointer Manipulation
