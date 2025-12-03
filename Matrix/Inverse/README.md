📘 Inverse of a 3×3 Matrix in C

This program calculates the inverse of a 3×3 matrix using the adjoint and determinant method.
The user enters all matrix elements, and the program checks whether the inverse exists before computing it.

📌 Overview

A matrix has an inverse only if its determinant is non-zero.
This program:

Accepts a 3×3 matrix from the user.

Computes the determinant of the matrix.

If the determinant is zero → Prints that the matrix has no inverse.

If non-zero → Computes

Cofactor matrix

Adjoint matrix (transpose of cofactor matrix)

Inverse = adj(A) / det(A)

Prints the final inverse matrix.

🧮 Mathematical Formula

For a 3×3 matrix 
A−1=(1/∣A∣1)⋅adj(A)
where: 
    ∣A∣ = Determinant of A
    adj(A) = Transpose of the cofactor matrix


if ∣A∣=0, then A is singular → No inverse exists.

▶️ How to Compile and Run
Compile:
gcc inverse_matrix.c -o inverse_matrix

Run:
./inverse_matrix

📝 Example Input
Matrix[0][0]: 2
Matrix[0][1]: 1
Matrix[0][2]: 3
Matrix[1][0]: 0
Matrix[1][1]: 1
Matrix[1][2]: 4
Matrix[2][0]: 5
Matrix[2][1]: 2
Matrix[2][2]: 0

Example Output
Inverse of the matrix is:
-1.636364  1.454545  0.454545
 1.818182 -1.636364 -0.636364
-0.454545  0.545455  0.181818