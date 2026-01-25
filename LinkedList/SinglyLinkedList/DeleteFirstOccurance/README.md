Singly Linked List – Insert and Delete First Occurrence (C)
📌 Description

This program implements a Singly Linked List in C with the following functionalities:

Create a node dynamically

Insert nodes at the end of the list

Delete the first occurrence of a given value

Display the linked list

The program demonstrates dynamic memory allocation, pointer manipulation, and basic linked list operations.

🧠 Concepts Used

Structures (struct)

Self-referential structures

Dynamic memory allocation (malloc, free)

Pointers

Singly Linked List operations

⚙️ Features

✔ Insert nodes at the end of the list
✔ Delete only the first occurrence of a given value
✔ Handle edge cases:

Empty list

Deleting the first (head) node

Value not present in the list
✔ Display the list before and after deletion

🧩 Program Flow

User enters the number of nodes

Values are inserted at the end of the linked list

The linked list is displayed

User enters a value to delete

First occurrence of the value is deleted

Updated linked list is displayed

▶️ Sample Input / Output
How many nodes?
5
Enter the value of node 1: 10
Enter the value of node 2: 20
Enter the value of node 3: 30
Enter the value of node 4: 20
Enter the value of node 5: 40

Singly Linked List:
10->20->30->20->40->NULL

Enter the value to delete (first occurrence): 20

List after deletion:
10->30->20->40->NULL

🛠️ Functions Overview
Function Name	Description
createNode()	Creates a new node and allocates memory
insertEnd()	Inserts a node at the end of the list
deleteFirstOccurrence()	Deletes the first occurrence of a given value
display()	Displays the linked list
