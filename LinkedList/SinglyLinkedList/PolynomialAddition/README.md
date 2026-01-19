# Polynomial Addition Using Linked List (C)

## 📌 Description
This program implements **addition of two polynomials** using a **singly linked list** in C.  
Each term of the polynomial is represented as a node containing a **coefficient** and an **exponent**.  
The polynomials are stored in **descending order of exponents**, and like terms are **automatically combined**.

---

## 🧩 Data Structure Used
**Singly Linked List**

Each node represents one term of a polynomial:

```c
struct Node {
    int coeff;        // Coefficient of the term
    int exp;          // Exponent of the term
    struct Node *next;
};

⚙️ Features

Dynamic memory allocation using malloc

Polynomials stored in sorted order (descending exponent)

Automatic merging of like terms

Zero-coefficient terms are ignored

Modular and readable program structure

🛠️ Functions Overview
createNode(int coeff, int exp)

Creates and initializes a new polynomial term (node).

insertTerm(struct Node *head, int coeff, int exp)

Inserts a term into the polynomial in sorted order

Combines coefficients if the exponent already exists

readPolynomial()

Reads polynomial terms from the user and builds the linked list.

displayPolynomial(struct Node *poly)

Displays the polynomial in standard mathematical form.

addPolynomials(struct Node *p1, struct Node *p2)

Adds two polynomials and returns the resulting polynomial.

▶️ How to Compile and Run
gcc polynomial_addition.c -o poly
./poly

🧪 Sample Input
Enter first polynomial:
Enter number of terms: 3
Enter coefficient and exponent: 3 2
Enter coefficient and exponent: 4 1
Enter coefficient and exponent: 2 0

Enter second polynomial:
Enter number of terms: 2
Enter coefficient and exponent: 5 2
Enter coefficient and exponent: 6 1

📤 Sample Output
Polynomial 1: 3x^2 + 4x^1 + 2x^0
Polynomial 2: 5x^2 + 6x^1
Sum of Polynomials: 8x^2 + 10x^1 + 2x^0

📈 Time Complexity

Insertion: O(n)

Addition: O(n + m)
where n and m are the number of terms in the two polynomials.
