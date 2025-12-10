📌 Singly Linked List in C — Insert & Delete Operations

This project demonstrates how to create and manage a singly linked list in C.
It includes operations such as:

Creating nodes

Inserting nodes at the end

Deleting nodes from:
✔ Beginning
✔ End
✔ Any given position

Displaying the linked list

Menu-driven interface for user interaction

🧩 What is a Linked List?

A linked list is a dynamic data structure made of nodes.
Each node contains:

data — the value stored

next — pointer to the next node

This program implements a basic singly linked list using C structures and dynamic memory allocation.

📂 Program Structure
1. Node Structure
struct NODE {
    int data;
    struct NODE *next;
};

2. Main Operations
Operation	Description
createNode()	Allocates and initializes a new node
insertEnd()	Inserts a new node at the end
display()	Prints the entire list
deleteBeginning()	Removes the first node
deleteEnd()	Removes the last node
deletePosition()	Deletes a node at a given position
🛠️ How It Works
Step 1: Create Initial List

Program asks:

How many nodes?


Then user enters values for each node.

Step 2: Menu Operations

User can choose:

1. Delete Beginning
2. Delete End
3. Delete at Position
4. Display List
5. Exit


Each choice performs the corresponding linked list operation.

▶️ Sample Output (Example)
How many nodes?
3
Enter value of node 1: 10
Enter value of node 2: 20
Enter value of node 3: 30

Singly Linked List:
10->20->30->NULL

MENU:
1. Delete Beginning
2. Delete End
3. Delete at Position
4. Display List
5. Exit
Enter choice: 1
Deleted node from beginning.

Remaining List:
20->30->NULL

⚠️ Memory Management

All deleted nodes are freed using free() to prevent memory leaks.

📘 Key Concepts Practiced

Dynamic memory allocation (malloc, free)

Self-referential structures

Pointers & pointer traversal

Basic data structure operations

Menu-driven programming in C

🎯 Useful For

Students learning data structures

Interview preparation

Understanding dynamic memory and pointers

Basic linked list implementation practice