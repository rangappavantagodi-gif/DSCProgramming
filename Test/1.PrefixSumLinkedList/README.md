Prefix Sum Using Singly Linked List in C
📌 Description

This program demonstrates how to:

Read elements into an array

Compute the prefix sum array

Store the prefix sum values in a singly linked list

Display the linked list

It combines arrays, functions, dynamic memory allocation, and linked list operations in C.

🛠️ Features

Uses a structure to represent a singly linked list node

Dynamically allocates memory using malloc()

Computes prefix sum efficiently

Inserts elements at the end of the linked list

Displays the linked list in a readable format

📂 Program Overview
Structure Definition
struct NODE {
    int data;
    struct NODE *next;
};


Represents a node in the singly linked list.

Functions Used
1️⃣ readArray()

Reads elements from the user into an array.

2️⃣ createNode()

Dynamically allocates memory for a new node

Initializes node data and pointer

3️⃣ insertEnd()

Inserts a new node at the end of the linked list.

4️⃣ display()

Displays all elements of the linked list in the format:

value1 -> value2 -> value3 -> NULL

🔢 Algorithm

Read the size of the array

Read array elements

Compute prefix sum array

preSum[i]=preSum[i−1]+arr[i]

Insert each prefix sum value into a linked list

Display the linked list

▶️ Sample Input
Enter the size of array: 5
Enter array elements: 1 2 3 4 5

▶️ Sample Output
1 -> 3 -> 6 -> 10 -> 15 -> NULL

📌 Applications

Understanding prefix sum technique

Practicing linked list implementation

Learning dynamic memory allocation in C

Useful in competitive programming and data structure fundamentals

🧾 Requirements

C Compiler (GCC recommended)

Standard C Libraries (stdio.h, stdlib.h)

✅ Conclusion

This program effectively demonstrates how array processing and linked list data structures can be combined using modular programming in C.