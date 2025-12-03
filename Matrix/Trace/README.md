Trace of a Square Matrix in C

This program calculates the trace of a square matrix entered by the user.
The trace of a matrix is the sum of all elements on its main diagonal, i.e., elements where the row index and column index are the same.

📘 Program Overview

The program performs the following steps:

Prompts the user to enter the size of the square matrix (n × n).

Reads all elements of the matrix from the user.

Computes the trace by summing matrix[i][i] for all i.

Displays the final trace value.

🧮 What Is the Trace of a Matrix?

For a square matrix A of size 3X3​
trace (A) = a11​+a22​+a33​	​

▶️ How to Compile and Run
Compile
gcc trace_matrix.c -o trace_matrix

Run
./trace_matrix

📌 Example Execution
Input
Enter the size of the square matrix:
3
Enter the elements:
matrix[0][0]: 1
matrix[0][1]: 2
matrix[0][2]: 3
matrix[1][0]: 4
matrix[1][1]: 5
matrix[1][2]: 6
matrix[2][0]: 7
matrix[2][1]: 8
matrix[2][2]: 9

Output
Trace of matrix: 15


(Explanation: 1 + 5 + 9 = 15)