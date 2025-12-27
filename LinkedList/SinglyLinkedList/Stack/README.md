Stack Implementation Using Linked List in C
📌 Overview

This project demonstrates the implementation of a Stack data structure using a Singly Linked List in the C programming language.
The stack follows the LIFO (Last In, First Out) principle and supports standard stack operations through a menu-driven interface.

🎯 Features

Dynamic memory allocation using linked lists

Menu-driven program for user interaction

Stack size limited to a predefined maximum

Clear separation of stack operations

Proper handling of overflow and underflow conditions

🧠 Stack Operations Supported
Operation	Description
Push	Inserts an element at the top of the stack
Pop	Removes the top element from the stack
Display	Displays all elements from top to bottom
isEmpty	Checks whether the stack is empty
isFull	Checks whether the stack has reached its maximum size
🏗 Data Structure Used

Singly Linked List

Each node contains:

data → stores the value

next → pointer to the next node

⚙️ Program Logic

The top pointer always points to the top element of the stack

New elements are added at the beginning of the linked list

Stack overflow is controlled using a predefined maximum stack size

Stack underflow is handled by checking whether the stack is empty

⏱ Time Complexity
Operation	Complexity
Push	O(1)
Pop	O(1)
Display	O(n)
isEmpty	O(1)
isFull	O(n)
🖥 Sample Output
--- Stack Menu ---
1. Push
2. Pop
3. Display
4. Exit

Enter your choice: 1
Enter value to push: 10

Enter your choice: 1
Enter value to push: 20

Enter your choice: 3
20 -> 10 -> NULL

Enter your choice: 2
Popped value: 20

🚀 How to Compile and Run
Compile
gcc stack_linked_list.c -o stack

Run
./stack

✅ Advantages of Linked List Stack

Dynamic size (no fixed array limit)

Efficient push and pop operations

Better memory utilization