Factorial of a Number Using Recursion in C
📌 Overview

This program calculates the factorial of a given number using a recursive function in the C programming language. It demonstrates the concept of recursion with a clear base case and recursive call.

Factorial of a number n is defined as:

n!=n×(n−1)×(n−2)×⋯×1

By definition:
0!=1

🧠 Concept Used

Recursion

Base case and recursive case

Conditional statements

User input handling

📂 Program Description

The program prompts the user to enter an integer.

If the number is negative, it displays an error message.

If the number is 0 or positive, it computes the factorial using a recursive function and prints the result.

🔁 Recursive Logic
factorial(n) = n * factorial(n - 1)

Base Case
factorial(0) = 1
factorial(1) = 1

🧪 Sample Input & Output

Input

Enter a number: 5


Output

Factorial of 5 is 120


Input

Enter a number: -3


Output

Factorial is not defined for negative numbers.

🛠 How to Compile and Run

Save the program as factorial.c

Compile using:

gcc factorial.c -o factorial


Run the program:

./factorial
