# Singly Linked List – Recursive Reverse (C Program)

## 📌 Overview
This program demonstrates the implementation of a **Singly Linked List in C** and shows how to **reverse the linked list using a recursive method**.

The program allows the user to:
- Create a singly linked list
- Insert nodes at the end
- Display the linked list
- Reverse the linked list using recursion
- Display the reversed list

---

## 🧠 Key Concepts Used
- Self-referential structures
- Dynamic memory allocation (`malloc`)
- Pointers
- Recursion
- Linked list traversal

---

## 🏗️ Data Structure Used

```c
struct NODE {
    int data;
    struct NODE *next;
};
data stores the value of the node

next stores the address of the next node

⚙️ Functions Description
1️⃣ createNode(int value)
Dynamically allocates memory for a new node

Initializes the node with given value

Returns pointer to the new node

Terminates program if memory allocation fails

2️⃣ insertEnd(struct NODE *head, int value)
Inserts a new node at the end of the linked list

Handles the case when the list is empty

Returns updated head pointer

3️⃣ display(struct NODE *head)
Traverses the linked list

Prints each node’s data followed by ->

Ends with NULL

Example Output:

10->20->30->NULL

4️⃣ reverseRecursive(struct NODE *head)
Reverses the linked list using recursion

Base case:

Empty list or single node

Recursive case:

Reverses remaining list

Adjusts current node pointers

Logic Used:

head->next->next = head;
head->next = NULL;

5️⃣ main()
Reads number of nodes from user

Accepts node values

Creates the linked list

Displays original list

Reverses the list recursively

Displays reversed list

🔄 Sample Execution
Input:

How many nodes?
4
Enter the value of node 1:10
Enter the value of node 2:20
Enter the value of node 3:30
Enter the value of node 4:40
Output:


Singly Linked List:
10->20->30->40->NULL

Reversed Singly Linked List (Recursive):
40->30->20->10->NULL
⏱️ Time and Space Complexity
Operation	Complexity
Insert at End	O(n)
Display	O(n)
Recursive Reverse	O(n) time, O(n) space (recursion stack)

📚 Learning Outcome
Understand how singly linked lists work

Learn recursive approach to reverse a linked list

Gain hands-on practice with pointers and recursion in C

