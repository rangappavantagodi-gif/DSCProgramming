Queue Using Linked List in C
📌 Overview

This program implements a Queue data structure using a singly linked list in C.
The queue follows the FIFO (First In First Out) principle and supports basic operations such as enqueue, dequeue, and display.
A maximum queue size is enforced to simulate memory constraints.

✨ Features

Dynamic memory allocation using linked lists

FIFO (First In First Out) behavior

Menu-driven program

Handles overflow and underflow conditions

Configurable maximum queue size

Proper memory deallocation to avoid leaks

🧠 Queue Concept

A queue operates on the principle:

First element inserted is the first element removed

Operations Supported

Enqueue → Insert an element at the rear

Dequeue → Remove an element from the front

Display → Show all queue elements from front to rear

🏗️ Data Structure Used

Singly Linked List

Two pointers are maintained:

front → Points to the first element

rear → Points to the last element

⚙️ Program Flow

Display menu options

Accept user choice

Perform selected queue operation

Repeat until user exits

📋 Menu Options
1. Enqueue
2. Dequeue
3. Display
4. Exit

🧪 Sample Output
--Max Queue memory is 10--

--- Queue Menu ---
1. Enqueue
2. Dequeue
3. Display
4. Exit

Enter your choice: 1
Enter value to enqueue: 10

Enter your choice: 1
Enter value to enqueue: 20

Enter your choice: 3
10 -> 20 -> NULL

Enter your choice: 2
Dequeued value: 10

Enter your choice: 3
20 -> NULL

🚀 How to Compile and Run
gcc queue_linked_list.c -o queue
./queue

⏱️ Time Complexity
Operation	Complexity
Enqueue	O(1)
Dequeue	O(1)
Display	O(n)
isFull	O(n)
📦 Memory Management

Uses malloc() for dynamic allocation

Uses free() after dequeue operation

Prevents memory leaks
