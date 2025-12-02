Matrix Addition in C

This project is a simple C program that performs matrix addition for two user-defined matrices. The program takes the number of rows and columns as input, reads the elements of both matrices, adds them element-wise, and finally displays the resulting matrix.

📌 Features

Accepts matrix dimensions from the user

Validates matrix size (rows and columns must be positive)

Accepts elements for two matrices

Performs element-by-element addition

Displays the resulting matrix

Uses variable-length arrays (VLAs) for dynamic matrix allocation

📂 Program Workflow

Ask the user to enter:

Number of rows

Number of columns

Validate the input:

If rows or columns ≤ 0, program terminates with an error message.

Read data for:

Matrix 1

Matrix 2

Add both matrices:

result[i][j] = matrix1[i][j] + matrix2[i][j]

Display the resultant matrix.

🧮 Example Input/Output

Input

Enter number of rows:
2
Enter number of columns:
2
Enter elements of matrix one:
Matrix one [0][0]: 1
Matrix one [0][1]: 2
Matrix one [1][0]: 3
Matrix one [1][1]: 4
Enter elements of matrix two:
Matrix two [0][0]: 5
Matrix two [0][1]: 6
Matrix two [1][0]: 7
Matrix two [1][1]: 8


Output

-- Matrix addition result--
6 8
10 12

🛠️ Requirements

GCC or any standard C compiler

Basic understanding of matrix operations

🚀 How to Compile & Run
gcc matrix_addition.c -o matrix_addition
./matrix_addition