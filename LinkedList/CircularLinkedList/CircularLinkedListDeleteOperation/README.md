Circular Singly Linked List (Deletion Operations) in C
📌 Overview

This program implements a Circular Singly Linked List in C with a menu-driven interface focusing on deletion operations.
In a circular linked list, the last node points back to the first node, enabling continuous traversal.

The program allows users to:

Create a circular singly linked list

Delete nodes from:

Beginning

End

A specific position

Display the list

Interact using a menu-based system

🧩 Data Structure
struct NODE {
    int data;
    struct NODE *next;
};


data → Stores integer value

next → Pointer to the next node (last node points to head)

⚙️ Functions Description
1. createNode(int value)

Dynamically allocates memory for a new node

Initializes node data

Exits program if memory allocation fails

2. insertEnd(struct NODE *head, int value)

Inserts a node at the end of the circular linked list

Used to create the initial list

Maintains circular linking

3. display(struct NODE *head)

Displays all elements in the circular linked list

Traverses until it reaches the head again

Output format:

10->20->30->back to head

🗑️ Deletion Operations
4. deleteBeginning(struct NODE *head)

Deletes the first node

Handles:

Empty list

Single-node list

Updates the last node to point to the new head

5. deleteEnd(struct NODE *head)

Deletes the last node

Traverses to the second-last node

Maintains circular structure after deletion

6. deletePosition(struct NODE *head, int pos)

Deletes a node at a specific 1-based position

Uses deleteBeginning() for position 1

Validates position before deletion

▶️ Program Flow

User enters the number of nodes

Nodes are inserted at the end

The circular linked list is displayed

User selects deletion operations from the menu

List updates dynamically based on user input

🧪 Sample Output
How many nodes?
3
Enter value of node 1: 10
Enter value of node 2: 20
Enter value of node 3: 30
Circular Singly Linked List:
10->20->30->back to head

MENU:
1. Delete Beginning
2. Delete End
3. Delete at Position
4. Display List
5. Exit
Enter choice: 1
Deleted node from beginning.
20->30->back to head

🛠️ How to Compile and Run
gcc circular_delete.c -o circular_delete
./circular_delete
