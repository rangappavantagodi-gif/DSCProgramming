Move Last Node to Front – Singly Linked List in C
📌 Description

This program demonstrates basic singly linked list operations in C and implements an algorithm to move the last node of a linked list to the front.

The program allows the user to:

Create a singly linked list dynamically

Insert nodes at the end of the list

Display the list

Move the last node to the front and display the updated list

🧠 Concepts Used

Singly Linked List

Dynamic Memory Allocation (malloc)

Self-referential structures

Pointer manipulation

Traversing linked lists

🧩 Functions Overview
createNode(int value)

Allocates memory for a new node

Initializes node data and next pointer

Returns pointer to the new node

insertEnd(struct NODE *head, int value)

Inserts a new node at the end of the linked list

Returns the updated head pointer

moveLastToFront(struct NODE *head)

Moves the last node of the linked list to the front

Handles edge cases:

Empty list

List with only one node

Returns the updated head pointer

display(struct NODE *head)

Prints the elements of the linked list in order

🔁 Algorithm: Move Last Node to Front

Check if the list is empty or has only one node

Traverse the list to find:

Last node

Second-last node

Set secondLast->next = NULL

Make the last node point to the current head

Update head to the last node

▶️ Sample Input
How many nodes?
4
Enter the value of node 1:10
Enter the value of node 2:20
Enter the value of node 3:30
Enter the value of node 4:40

🖥️ Sample Output
Singly Linked List:
10->20->30->40->NULL
After moving last node to front:
40->10->20->30->NULL

⏱️ Time and Space Complexity

Time Complexity: O(n)

Space Complexity: O(1)

🛠️ How to Compile and Run
gcc linkedlist.c -o linkedlist
./linkedlist
