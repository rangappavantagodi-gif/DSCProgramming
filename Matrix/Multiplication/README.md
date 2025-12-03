Matrix Multiplication in C

This project demonstrates how to perform matrix multiplication in the C programming language.
The program takes two matrices as input from the user, validates whether multiplication is possible, and then computes and displays the resulting matrix.

📌 Features

Accepts dynamic matrix sizes from the user.

Validates matrix multiplication rule:
Number of columns of Matrix 1 must equal the number of rows of Matrix 2.

Uses nested loops to perform matrix multiplication.

Displays the final resultant matrix in clean tabular format.

📘 Matrix Multiplication Rule

For two matrices:

Matrix 1 of size rows1 × cols1

Matrix 2 of size rows2 × cols2

Multiplication is possible only when:

cols1 == rows2


The resulting matrix will have size:

rows1 × cols2

🧮 How the Program Works

The program asks the user to input:

Dimensions of Matrix 1

Dimensions of Matrix 2

It checks if multiplication is possible.

It accepts matrix elements from the user.

It initializes the result matrix to zero.

It performs multiplication using three nested loops.

Finally, it prints the resulting matrix.

▶️ How to Run

Save the program (C source file) locally.

Compile using GCC:

gcc matrix_multiplication.c -o matrix


Run the program:

./matrix

📝 Example Input/Output
Example Input:
Enter the rows and columns of matrix 1: 2 2
Enter the rows and columns of matrix 2: 2 2
Enter matrix values 1,2    1,2,
                    3,4    3,4

Example Output:
Resultant Matrix:
7  10
15 22