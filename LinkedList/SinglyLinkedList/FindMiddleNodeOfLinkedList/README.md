Find the Middle Node of a Singly Linked List (C)
📌 Description

This program demonstrates how to find the middle element of a singly linked list using the two-pointer (slow and fast) technique in C.
The user dynamically enters the number of nodes and their values, after which the program displays the list and prints the middle element.

🧠 Problem Statement

Given a singly linked list, determine and display the middle node efficiently without counting the total number of nodes.

🛠️ Features

Dynamic creation of a singly linked list

Insert nodes at the end

Display the linked list

Find middle node using the Tortoise and Hare algorithm

Handles empty list condition

📂 Program Structure

The program consists of the following functions:

createNode() – Allocates memory and creates a new node

insertEnd() – Inserts a node at the end of the linked list

display() – Displays all elements of the linked list

findMiddle() – Finds and prints the middle node

main() – Accepts user input and calls required functions

🧾 Algorithm

Start

Read the number of nodes n

Insert n nodes at the end of the linked list

Display the linked list

Initialize two pointers:

slow pointer moves one step

fast pointer moves two steps

Traverse the list until fast reaches the end

slow pointer will point to the middle node

Display the middle element

Stop

💻 Sample Input
How many nodes?
5
Enter value of node 1: 10
Enter value of node 2: 20
Enter value of node 3: 30
Enter value of node 4: 40
Enter value of node 5: 50

📤 Sample Output
Singly Linked List:
10->20->30->40->50->NULL
Middle element: 30
