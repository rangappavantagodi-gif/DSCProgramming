Singly Linked List – Split into Two Halves (C Program)
📌 Overview

This program implements a singly linked list in C and demonstrates how to split the list into two halves using the slow and fast pointer technique.

The program allows the user to:

Create a singly linked list

Insert nodes at the end

Display the linked list

Split the linked list into two halves

Display both halves separately

🧠 Key Concept Used

Slow and Fast Pointer Technique

slow pointer moves one step at a time

fast pointer moves two steps at a time

When fast reaches the end, slow will be at the middle

This method works efficiently in O(n) time and O(1) extra space.

🗂️ Program Structure
1. Data Structure
struct NODE {
    int data;
    struct NODE *next;
};


A self-referential structure used to represent a node in the singly linked list.

2. Functions Implemented
Function Name	Description
createNode()	Allocates memory and creates a new node
insertEnd()	Inserts a node at the end of the list
splitList()	Splits the linked list into two halves
display()	Displays the linked list
3. Splitting Logic

If the number of nodes is even → both halves have equal nodes

If the number of nodes is odd → first half has one extra node

Pointers are passed using pointer to pointer (struct NODE **) to correctly update the heads of both halves.

▶️ Sample Input
How many nodes?
5
Enter the value of node 1:10
Enter the value of node 2:20
Enter the value of node 3:30
Enter the value of node 4:40
Enter the value of node 5:50

▶️ Sample Output
Singly Linked List:
10->20->30->40->50->NULL

First Half:
10->20->30->NULL

Second Half:
40->50->NULL

⏱️ Time and Space Complexity

Time Complexity: O(n)

Auxiliary Space: O(1)

🛠️ How to Compile and Run
gcc split_linked_list.c -o split
./split