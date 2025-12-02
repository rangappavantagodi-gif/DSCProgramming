Matrix Subtraction in C

This project is a simple C program that performs matrix subtraction for two user-defined matrices. The program takes the number of rows and columns as input, reads the elements of both matrices, subtracts the second matrix from the first one element-wise, and displays the resulting matrix.

📌 Features

Accepts matrix dimensions from the user

Validates matrix size (rows and columns must be positive)

Accepts elements for two matrices

Performs element-by-element subtraction

Displays the resulting matrix

Uses variable-length arrays (VLAs) for dynamic matrix sizing

📂 Program Workflow

User enters:

Number of rows

Number of columns

Program validates the input:

Rows and columns must be greater than zero

User enters elements for:

Matrix 1

Matrix 2

Program subtracts the matrices:

result[i][j] = matrix1[i][j] - matrix2[i][j]

Resultant matrix is printed.

🧮 Example Input/Output
Input
Enter number of rows:
2
Enter number of columns:
2
Enter elements of matrix one:
Matrix one [0][0]: 5
Matrix one [0][1]: 7
Matrix one [1][0]: 9
Matrix one [1][1]: 4

Enter elements of matrix two:
Matrix two [0][0]: 2
Matrix two [0][1]: 1
Matrix two [1][0]: 3
Matrix two [1][1]: 4

Output
-- Matrix subtraction result --
3 6
6 0

🛠️ Requirements

GCC or any standard C compiler

Basic matrix subtraction understanding

🚀 How to Compile & Run
gcc matrix_subtraction.c -o matrix_subtraction
./matrix_subtraction