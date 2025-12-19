Matrix Input and Display Program (C)
Overview

This project contains a simple C program that demonstrates how to read and display a matrix using a 2D array. The program accepts the number of rows and columns from the user, validates the input, reads matrix elements, and prints the matrix in a structured format.

Features

User-defined matrix dimensions

Input validation for rows and columns

Dynamic-sized 2D array (C99 standard)

Matrix input using nested loops

Clear matrix output formatting

Prerequisites

C Compiler supporting C99 or later (e.g., GCC)

Basic knowledge of C programming and arrays

How It Works

The program prompts the user to enter:

Number of rows

Number of columns

Input values are validated to ensure they are positive.

A 2D array (matrix) is declared using the given dimensions.

Matrix elements are read using nested loops.

The matrix is printed in row–column format.

Build and Run
Compile
gcc matrix.c -o matrix

Execute
./matrix

Sample Execution
--Program to read and print matrix--
Enter number of rows:
2
Enter number of columns:
3
Enter elements of matrix:
Matrix element [0][0]: 1
Matrix element [0][1]: 2
Matrix element [0][2]: 3
Matrix element [1][0]: 4
Matrix element [1][1]: 5
Matrix element [1][2]: 6

2 X 3 Matrix:
1 2 3
4 5 6

Input Validation

If the number of rows or columns is less than or equal to zero, the program terminates with an error message.

This prevents invalid memory allocation and runtime issues.

Limitations

Uses stack-based variable length arrays (VLAs), which may not be supported by older C standards.

No upper bound check on matrix size.