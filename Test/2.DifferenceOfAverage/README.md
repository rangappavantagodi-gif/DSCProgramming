Linked List of Differences from Average
📌 Description

This program reads an array of n integers, calculates the average of the elements, and then stores the difference between the average and each array element in a singly linked list.
Finally, the linked list is displayed.

🧠 Problem Statement

Write a program to:

Read an array of n numbers.

Compute the average of the array elements.

Save the difference between the average and each array element in a linked list.

Display the linked list.

🛠️ Concepts Used

Arrays

Structures

Singly Linked List

Dynamic Memory Allocation (malloc)

Functions

Pointer manipulation

🧾 Program Logic

Read the size of the array and its elements.

Calculate the sum and average of the array.

For each array element:

Compute difference = average - array[i]

Insert the difference at the end of the linked list.

Display the linked list.

🧑‍💻 Functions Description
createNode(int value)

Dynamically allocates memory for a new node.

Initializes the node with given data and NULL next pointer.

insertEnd(struct NODE *head, int value)

Inserts a new node at the end of the linked list.

Returns the updated head pointer.

display(struct NODE *head)

Traverses and prints the linked list elements.

▶️ Sample Input
Enter size of array: 5
Enter array elements
10 20 30 40 50

▶️ Sample Output
linked list
20 -> 10 -> 0 -> -10 -> -20 -> NULL


(Average = 30)

⚙️ Compilation and Execution

Use the following commands to compile and run the program:

gcc program.c -o program
./program

⚠️ Notes

Integer division is used while calculating the average.

Memory allocation failure is handled using exit(1).

The linked list stores differences, not the original values.

✅ Conclusion

This program demonstrates how arrays and linked lists can be combined effectively, along with dynamic memory management, to solve real-world problems involving data transformation.