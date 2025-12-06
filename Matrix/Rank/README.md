Rank of a 2×2 Matrix – C Program

This program calculates the rank of a 2×2 matrix entered by the user.
The rank of a matrix tells us how many linearly independent rows or columns the matrix contains.

📘 How the Program Works

A 2×2 matrix:  [a b]
               [c d]

has determinant:
det=ad−bc

The rank can be determined using simple rules:

✅ 1. If det ≠ 0 → Rank = 2

The matrix is full-rank (both rows/columns are independent).

✅ 2. If all elements are zero → Rank = 0

This is the zero matrix.

✅ 3. Otherwise → Rank = 1

Determinant is zero, but the matrix is not fully zero → only one independent row/column.

📥 Input Format

The user is prompted to enter the four elements of a 2×2 matrix:

Matrix [0][0] :
Matrix [0][1] :
Matrix [1][0] :
Matrix [1][1] :


Each element is read as a floating-point number (float).

📤 Output

Based on the determinant and element checks, the program displays:

Rank of matrix is: 2

Rank of matrix is: 1

Rank of matrix is: 0

🧮 Code Logic Summary

Read a 2×2 matrix

Compute determinant

Apply rank rules:

det ≠ 0 → rank 2

all elements 0 → rank 0

otherwise → rank 1

▶️ Example

Input:

1 2
2 4


Output:

Rank of matrix is: 1
