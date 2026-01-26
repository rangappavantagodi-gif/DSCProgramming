Singly Linked List – Delete All Occurrences (C)
📌 Description

This program demonstrates the implementation of a Singly Linked List in C with functionality to:

Dynamically create nodes

Insert nodes at the end of the list

Delete all occurrences of a given value

Display the linked list before and after deletion

The program efficiently handles memory using malloc() and free().

🧠 Concepts Used

Structures and self-referential structures

Dynamic memory allocation

Pointer manipulation

Singly Linked List operations

⚙️ Features

✔ Insert nodes at the end of the list
✔ Delete all occurrences of a specified value
✔ Handles edge cases:

Empty list

Multiple matching nodes at the head

Matching nodes in middle or end
✔ Prevents memory leaks using free()

🧩 Program Flow

User inputs the number of nodes

Values are inserted at the end of the linked list

Original linked list is displayed

User enters a value to delete

All occurrences of that value are removed

Updated linked list is displayed

▶️ Sample Input / Output
How many nodes?
6
Enter value of node 1: 10
Enter value of node 2: 20
Enter value of node 3: 30
Enter value of node 4: 20
Enter value of node 5: 20
Enter value of node 6: 40

Original List:
10->20->30->20->20->40->NULL

Enter value to delete (all occurrences): 20

List after deletion:
10->30->40->NULL

🛠️ Functions Overview
Function Name	Description
createNode()	Allocates memory and creates a new node
insertEnd()	Inserts a node at the end of the list
deleteAllOccurrences()	Deletes all nodes containing the given value
display()	Displays the linked list