Singly Linked List in C

This project demonstrates a simple implementation of a singly linked list in the C programming language.
It allows the user to create nodes, insert them at the end of the list, and display the entire list.

📌 Features

Uses a self-referential structure to represent linked list nodes

Dynamically allocates memory for each new node

Inserts nodes at the end of the list

Displays the complete linked list in data -> data -> ... -> NULL format

User-friendly input prompts

🧵 Data Structure Used
struct NODE {
    int data;
    struct NODE *next;
};


Each node stores:

data: The integer value

next: Pointer to the next node

🔧 Functions Overview
createNode(int value)

Creates a new node with the given value.

insertEnd(struct NODE *head, int value)

Inserts a new node at the end of the linked list.

display(struct NODE *head)

Traverses and prints the linked list.

▶️ Program Flow

The user is asked how many nodes to create.

The program takes input values for each node.

Nodes are inserted at the end of the list.

Finally, the entire list is displayed.

🖥️ Sample Output
How many nodes?
3
Enter the value of node 1:10
Enter the value of node 2:20
Enter the value of node 3:30
Singly Linked List:
10->20->30->NULL

📚 Concepts Demonstrated

Dynamic memory allocation (malloc)

Self-referential structures

Linked list traversal

Pointer manipulation

📝 Notes

Always check whether malloc() successfully allocates memory.

In a larger application, freeing memory with free() is recommended.