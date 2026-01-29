# Singly Linked List Concatenation in C

## 📌 Overview
This program demonstrates the implementation of **singly linked lists in C** and performs **concatenation of two linked lists**.  
Users can create two separate linked lists by entering node values, and the program merges the second list at the end of the first list.

---

## 🧩 Features
- Dynamic memory allocation using `malloc`
- Creation of singly linked list nodes
- Insertion of nodes at the end of the list
- Concatenation of two linked lists
- Display of linked list elements

---

## 🏗️ Data Structure Used
```c
struct Node {
    int data;
    struct Node *next;
};

Each node contains:

data: Integer value stored in the node

next: Pointer to the next node in the list

🔧 Functions Description
createNode(int value)

Allocates memory for a new node

Initializes node data and sets next to NULL

insertEnd(struct Node *head, int value)

Inserts a new node at the end of the linked list

Returns the updated head pointer

concatenate(struct Node *head1, struct Node *head2)

Appends the second linked list to the end of the first

Handles cases where the first list is empty

display(struct Node *head)

Traverses and prints the linked list elements

▶️ Program Flow

User enters the number of nodes for Linked List 1

User inputs values for each node

User enters the number of nodes for Linked List 2

User inputs values for each node

Both lists are displayed

Lists are concatenated

Final merged list is displayed

🖥️ Sample Output
How many nodes for linked list 1?
3
Enter the value of node 1:10
Enter the value of node 2:20
Enter the value of node 3:30
How many nodes for linked list 2?
2
Enter the value of node 1:40
Enter the value of node 2:50

Singly Linked List 1:
10 -> 20 -> 30 -> NULL
Singly Linked List 2:
40 -> 50 -> NULL
After Concatenation:
10 -> 20 -> 30 -> 40 -> 50 -> NULL

🛠️ Compilation & Execution
gcc linkedlist_concat.c -o linkedlist_concat
./linkedlist_concat