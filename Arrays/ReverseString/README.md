Reverse String Program in C
📘 Overview

This C program takes a string input from the user and prints its length as well as its reversed form. It uses basic string handling functions and array manipulation to achieve the reversal.

🔧 Features

Accepts a string input (up to 19 characters).

Calculates the string length using strlen().

Reverses the string manually using a for loop.

Displays both the length and reversed string to the user.

📂 Code Explanation
1. Input Handling

The program reads a string safely using:

scanf("%19s", str);


This prevents buffer overflow by limiting the input size.

2. String Length Calculation

strlen(str) is used to find the number of characters in the input string.

3. String Reversal

A loop copies characters from the end of the original string to the beginning of the new reverseString array.

4. Output

The program prints:

The string length

The reversed string

▶️ Sample Output
--Program to reverse a string--
Enter your string to be reversed: hello
String length: 5
Reverse name: olleh

🛠️ Compilation & Execution

To compile and run the program:

gcc reverse_string.c -o reverse
./reverse