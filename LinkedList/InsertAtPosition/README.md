Singly Linked List in C

This program implements a singly linked list in C with the ability to:

Create a new node

Insert nodes at the end

Display the linked list

Insert a node at a specified position (beginning, middle, or end)

It demonstrates dynamic memory allocation, pointer manipulation, and linked list traversal.

📌 Features
✔️ 1. Create a Node

Each node stores:

data → integer value

next → pointer to the next node

The function createNode() allocates memory dynamically using malloc().

✔️ 2. Insert at End

insertEnd() traverses the list until the last node and attaches the new node.

✔️ 3. Insert at a Given Position

insertAtPosition() allows inserting a node:

At the beginning (position = 1)

In the middle

At the end if the position exceeds list length

If the given position is invalid, the program prints a message and inserts the node at the end.

✔️ 4. Display Linked List

display() prints the node values in the format:

10 -> 20 -> 30 -> NULL

🧠 How the Program Works

User enters the number of initial nodes.

User provides values for each node (inserted at the end).

Program prints the created linked list.

User enters:

A position

A value

Program inserts the new node at the specified position.

Updated linked list is displayed.

🖥️ Example Input / Output

Input:

How many nodes? 
3
Enter the value of node 1: 10
Enter the value of node 2: 20
Enter the value of node 3: 30

Singly Linked List:
10->20->30->NULL

Enter position where new node to be added:
2
Enter the value of node:
99


Output:

Updated Singly Linked List:
10->99->20->30->NULL

📎 Code File Overview
Function Name	Purpose
createNode()	Allocates and initializes a new node
insertEnd()	Inserts a node at the end of the list
insertAtPosition()	Inserts a node at any valid position
display()	Prints the linked list
main()	Handles user input and runs operations

🧩 Concepts Used

Dynamic Memory Allocation (malloc)

Self-referential structures

Pointer manipulation

Traversing linked lists

Inserting nodes at specific positions

✅ Output Format

The program always prints the linked list in the format:

value1->value2->value3->...->NULL