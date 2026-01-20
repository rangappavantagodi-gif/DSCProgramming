Circular Singly Linked List in C
📌 Aim

To implement a Circular Singly Linked List in C with the operation of inserting nodes at the end and displaying the list.

🧠 Description

A Circular Singly Linked List is a variation of a singly linked list in which:

The last node does not point to NULL

Instead, it points back to the first node (head)

This creates a circular structure, allowing traversal of the list starting from any node.

🧩 Data Structure Used

The program uses a self-referential structure to represent each node.

struct NODE{
    int data;
    struct NODE *next;
};

Each node contains:

data → integer value

next → pointer to the next node in the list

⚙️ Functions Used
1️⃣ createNode(int value)

Dynamically allocates memory for a new node

Assigns the given value to data

Initializes next pointer

Terminates the program if memory allocation fails

2️⃣ insertEnd(struct NODE *head, int value)

Inserts a new node at the end of the circular linked list

If the list is empty:

The new node points to itself

Otherwise:

Traverses the list until the last node is found (temp->next == head)

Updates pointers to maintain circularity

3️⃣ display(struct NODE *head)

Displays all elements of the circular linked list

Uses a do–while loop to traverse the list

Traversal stops once the head node is reached again

▶️ Algorithm

Start

Read the number of nodes n

Repeat n times:

Read node value

Insert node at the end of the circular linked list

Display the circular linked list

Stop

🧪 Sample Output
How many nodes?
3
Enter the value of node 1: 10
Enter the value of node 2: 20
Enter the value of node 3: 30


Circular Singly Linked List:
10->20->30->back to head
