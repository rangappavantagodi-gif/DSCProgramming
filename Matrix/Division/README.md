Matrix Division Program in C (Using 3×3 Matrix Inverse)

This program performs matrix division for two 3×3 matrices using the formula:
A/B=A×B−1

Since matrix division is not defined directly in mathematics, this program computes the inverse of matrix B and then multiplies it with matrix A.

📘 Features

Computes the determinant of a 3×3 matrix

Computes the inverse of a 3×3 matrix using the adjoint/cofactor method

Checks if matrix B is singular (det = 0)

Performs matrix multiplication:
C=A×B−1

Prints the final result matrix C

📂 Program Flow

Input matrix A

Input matrix B

Calculate determinant of B

If determinant = 0 → inverse does not exist → division not possible

Compute inverse of B

Multiply A × inverse(B)

Display the result

🧮 Mathematical Concepts Used
1. Determinant of 3×3 Matrix

The determinant is computed using:

det(A)=a00​(a11​a22​−a12​a21​)−a01​(a10​a22​−a12​a20​)+a02​(a10​a21​−a11​a20​)
2. Inverse of 3×3 Matrix
A−1=(1/det(A))1⋅adj(A)

Where adj(A) is the transpose of the cofactor matrix.

📌 How Matrix Division Works

Matrix division:
A/B
is actually interpreted as:

A×B−1

This program follows that definition.

🧪 Example Input
Enter matrix A (3x3):
1 2 3
4 5 6
7 8 9

Enter matrix B (3x3):
1 0 0
0 1 0
0 0 1

Output:
Result of A / B = A × inverse(B):
1 2 3
4 5 6
7 8 9

⚠️ Notes

If the determinant of matrix B is 0, the inverse does not exist → matrix division is not possible.

This program works only for 3×3 matrices.

For larger matrices, Gauss-Jordan elimination is recommended.