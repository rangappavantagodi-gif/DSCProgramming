📘 Count the Number of Nodes in a Singly Linked List (C Program)

This project demonstrates how to create, insert, and count the number of nodes in a singly linked list using the C programming language.

🚀 Overview

A singly linked list is a dynamic data structure where each node contains:

data → integer value

next → pointer to the next node

This program allows the user to:

Create nodes dynamically

Insert nodes at the end of the linked list

Count how many nodes exist in the list

Display the total count to the user

🧩 Features

Dynamic memory allocation using malloc

User-defined number of nodes

Insert-at-end logic

Efficient traversal for counting nodes

Clean and simple logic suitable for beginners

🧱 Code Structure
1. createNode()

Creates a new node with given data and initializes next to NULL.

2. insertEnd()

Inserts a new node at the end of the linked list.

3. countNodes()

Traverses the list from head to NULL and returns the total node count.

4. main()

Takes user input

Builds the list

Counts total nodes

Displays result

🔍 Sample Input/Output
Input:
Enter number of nodes: 4
Enter 4 elements:
10 20 30 40

Output:
The number of nodes in the list is: 4

🛠 How to Compile and Run
Compile
gcc count_nodes.c -o count

Run
./count

📚 Concepts Used

Linked Lists

Pointers

Dynamic Memory Allocation

Loop Traversal