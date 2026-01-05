Stack Implementation Using Array in C
📌 Description

This program demonstrates the implementation of a Stack data structure using a static array in the C programming language.
It supports basic stack operations such as Push, Pop, and Display using a menu-driven approach.

The stack follows the LIFO (Last In, First Out) principle.

🧮 Stack Details

Maximum stack size: 10 elements

Implementation: Array-based

Global variables used:

stack[MAX] – stores stack elements

top – tracks the top position of the stack

⚙️ Operations Supported

Push

Adds an element to the top of the stack

Checks for stack overflow

Pop

Removes the top element from the stack

Checks for stack underflow

Display

Displays all stack elements from top to bottom

Exit

Terminates the program

🧑‍💻 Program Flow

The user is shown a menu

The user selects an operation

The selected stack operation is executed

The menu repeats until the user chooses to exit

🛠️ How to Compile and Run
Compile
gcc stack.c -o stack

Run
./stack

📥 Sample Output
--- STACK MENU ---
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value to push: 10
10 pushed into stack.

Enter your choice: 1
Enter value to push: 20
20 pushed into stack.

Enter your choice: 3
Stack elements (top to bottom): 20 10

Enter your choice: 2
20 popped from stack.

Enter your choice: 4
Exiting program..

✅ Key Concepts Used

Arrays

Functions

Global variables

Conditional statements

Loops

Stack data structure

