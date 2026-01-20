Circular Singly Linked List in C
📌 Overview

This program demonstrates the implementation of a Circular Singly Linked List in C.
In a circular linked list, the last node points back to the first node (head), forming a loop. This structure is useful in applications like round-robin scheduling, circular queues, and buffer management.

The program supports:

Creating nodes dynamically

Inserting nodes at the end

Inserting nodes at the beginning

Inserting nodes at a specific position

Displaying the circular linked list

🧩 Data Structure Used
struct NODE {
    int data;
    struct NODE *next;
};


data → Stores the integer value of the node

next → Pointer to the next node (points back to head for the last node)

⚙️ Functions Description
1. createNode(int value)

Dynamically allocates memory for a new node

Initializes node data and pointer

Terminates the program if memory allocation fails

2. insertEnd(struct NODE *head, int value)

Inserts a new node at the end of the circular linked list

If the list is empty, the node points to itself

3. insertBegin(struct NODE *head, int value)

Inserts a new node at the beginning

Updates the last node to point to the new head

4. insertAtPosition(struct NODE *head, int value, int pos)

Inserts a node at a given 1-based position

Handles invalid positions gracefully

5. display(struct NODE *head)

Displays all elements of the circular linked list

Traverses the list until it reaches the head again

▶️ Program Flow

User enters the number of nodes

Nodes are inserted at the end

The list is displayed

User inserts a node at the beginning

User inserts a node at a specific position

Updated list is displayed

🧪 Sample Output
How many nodes?
3
Enter the value of node 1:10
Enter the value of node 2:20
Enter the value of node 3:30
Circular Singly Linked List:
10->20->30->back to head

Enter the value of node to insert at begin:5
Enter the position to insert new node:3
Enter the value of node to insert at position:15
Circular Singly Linked List after insertion:
5->10->15->20->30->back to head

🛠️ How to Compile and Run
gcc circular_linked_list.c -o circular
./circular
