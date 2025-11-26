Pass By Reference Calculator
📝 Overview
This project is a simple calculator program in C that demonstrates the concept of pass by reference using pointers. The program allows users to perform basic arithmetic operations (addition, subtraction, multiplication, division) on two floating-point numbers.

⚙️ Features
- Accepts two floating-point numbers as input.
- Provides a menu-driven interface for:
- Addition
- Subtraction
- Multiplication
- Division (with division-by-zero error handling).
- Uses functions with pointer parameters to store results by reference.

🏗️ How It Works
- The user enters two numbers.
- A menu is displayed to choose the operation.
- Based on the choice:
- The corresponding function (add, subtract, multiply, divide) is called.
- Each function calculates the result and stores it in the memory location pointed to by result.
- The final result is printed to the console.

📂 Code Structure
- Functions:
- add(float num1, float num2, float *result)
- subtract(float num1, float num2, float *result)
- multiply(float num1, float num2, float *result)
- divide(float num1, float num2, float *result)
- Main Program:
- Handles input/output.
- Displays menu.
- Calls the appropriate function based on user choice.

▶️ Compilation & Execution
Compile:
gcc calculator.c -o calculator


Run:
./calculator



💻 Example Run
Pass By Reference Calculator Program
Enter first number:
5
Enter second number:
3
### Calculator menu ###
Enter 1 for Addition
Enter 2 for Subtraction
Enter 3 for Multiplication
Enter 4 for Division
Enter your choice:
1
Result = 8.00



🚨 Error Handling
- Division by zero is explicitly checked:
- If the second number is 0, the program prints:
Error division by zero



🎯 Learning Outcome
This program helps understand:
- Pointers in C
- Pass by reference mechanism
- Function modularity
- Basic arithmetic operations


