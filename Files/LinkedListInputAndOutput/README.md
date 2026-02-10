Linked List Input and Output Using File in C
📌 Overview

This program demonstrates how to read data from a file, store it in a singly linked list, display the linked list, and then write the linked list back to another file using the C programming language.

It combines two important concepts:

Linked Lists

File Handling in C

🧠 Concepts Used

Singly Linked List

Dynamic Memory Allocation (malloc)

File Handling (fopen, fscanf, fprintf, fclose)

Traversing a linked list

Error handling

📂 File Structure
.
├── input.txt
├── output.txt
└── linkedlist_file.c

📄 Input File Format (input.txt)

The input file should contain space-separated integers.

Example:

10 20 30 40 50

📄 Output File Format (output.txt)

The linked list is written in arrow format.

Example:

10->20->30->40->50->NULL

🔁 Program Workflow

Open input.txt in read mode.

Read integers one by one.

Insert each integer at the end of the linked list.

Display the linked list on the console.

Write the linked list to output.txt in data->data->NULL format.

🧪 Sample Output (Console)
Linked List contents:
10 -> 20 -> 30 -> 40 -> 50 -> NULL
Linked list written to output.txt

🛠 How to Compile and Run

Save the code as linkedlist_file.c

Compile the program:

gcc linkedlist_file.c -o linkedlist_file


Run the executable:

./linkedlist_file


Ensure input.txt is present in the same directory.