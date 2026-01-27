Find Minimum and Maximum in a Singly Linked List (C)
📌 Description

This program demonstrates how to create a singly linked list, insert nodes at the end, display the list, and find the minimum and maximum elements present in the list using the C programming language.

The user dynamically enters the number of nodes and their values at runtime.

🧠 Problem Statement

Given a singly linked list of integers, find:

The minimum element

The maximum element

🛠️ Features

Dynamic memory allocation using malloc

Insert nodes at the end of the list

Display the linked list

Find minimum and maximum elements in a single traversal

Handles empty list condition

📂 Program Structure

The program contains the following functions:

createNode() – Creates a new node

insertEnd() – Inserts a node at the end of the list

display() – Displays the linked list

findMinMax() – Finds and prints minimum and maximum values

main() – Handles user input and function calls

🧾 Algorithm

Start

Read number of nodes n

For each node:

Read value

Insert node at the end of the list

Display the linked list

Initialize min and max with the first node value

Traverse the list:

Update min if a smaller value is found

Update max if a larger value is found

Print minimum and maximum elements

Stop

💻 Sample Input
How many nodes?
5
Enter value of node 1: 10
Enter value of node 2: 5
Enter value of node 3: 25
Enter value of node 4: 3
Enter value of node 5: 15

📤 Sample Output
Singly Linked List:
10->5->25->3->15->NULL
Minimum element: 3
Maximum element: 25