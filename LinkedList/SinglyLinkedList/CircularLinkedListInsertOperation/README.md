Circular Singly Linked List in C
📌 Overview

This program demonstrates the implementation of a Circular Singly Linked List in C.
In a circular linked list, the last node points back to the first node (head), forming a loop.

The program supports:

Creating nodes dynamically

Inserting nodes at different positions

Displaying the circular linked list

🧱 Data Structure Used
Circular Singly Linked List

Each node contains:

data → integer value

next → pointer to the next node

struct NODE{
    int data;
    struct NODE *next;
};

⚙️ Operations Implemented
1️⃣ Create Node

Dynamically allocates memory using malloc

Initializes data and next pointer

2️⃣ Insert at End

Adds a new node at the end of the list

Maintains circularity by linking the last node to head

3️⃣ Insert at Beginning

Inserts a new node before the current head

Updates the last node’s next pointer

Updates head to the new node

4️⃣ Insert at a Given Position

Inserts a node at a specified 1-based position

Handles edge cases like:

Inserting at position 1

Invalid positions

5️⃣ Display List

Traverses the list using a do–while loop

Stops traversal when it reaches the head again

🧠 Algorithm (Brief)

Initialize head as NULL

Insert nodes using insertEnd

Traverse the list until the pointer comes back to head

Print each node’s data

⏱️ Time Complexity
Operation	Complexity
Insert at Beginning	O(n)
Insert at End	O(n)
Insert at Position	O(n)
Display	O(n)
🖥️ Sample Output
How many nodes?
3
Enter the value of node 1: 10
Enter the value of node 2: 20
Enter the value of node 3: 30

Circular Singly Linked List:
10->20->30->back to head
