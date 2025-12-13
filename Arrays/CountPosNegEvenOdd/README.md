Count Positive, Negative, Even, and Odd Numbers in an Array (C)
📌 Overview

This program counts the number of positive, negative, even, and odd elements in a one-dimensional integer array. It is designed as a beginner-friendly example to demonstrate array traversal, conditional logic, and basic input/output operations in C.

🎯 Objectives

Read elements into an integer array

Identify and count positive and negative numbers

Identify and count even and odd numbers

Practice loop and conditional statements in C

🧠 Approach

Read the number of elements from the user

Store the input values in an array

Traverse the array once using a loop

Use conditional checks to:

Count values greater than zero as positive

Count values less than zero as negative

Classify numbers as even or odd using the modulus operator

Note: Zero is considered an even number but is neither positive nor negative.

▶️ How to Build and Run

Use a standard C compiler such as GCC:

gcc count_numbers.c -o count_numbers
./count_numbers
🧪 Example Input
6
-5 0 12 -3 7 8
📤 Example Output
Positive numbers: 3
Negative numbers: 2
Even numbers: 3
Odd numbers: 3
⏱️ Complexity Analysis

Time Complexity: O(n)

Space Complexity: O(1) (excluding input array)

✅ Key Concepts Used

One-dimensional arrays

Conditional statements (if, else if, else)

Modulus operator for even/odd checking

Looping constructs

📚 Use Cases

Learning basic array operations in C

Preparing for programming labs and exams

Understanding classification problems using conditionals