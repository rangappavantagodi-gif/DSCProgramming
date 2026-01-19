#include <stdio.h>
#include <stdlib.h>

// Node structure for polynomial
struct Node {
    int coeff;
    int exp;
    struct Node *next;
};

// Create a new node
struct Node* createNode(int coeff, int exp) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}

// Insert term in sorted order (descending exponent)
struct Node* insertTerm(struct Node *head, int coeff, int exp) {
    struct Node *newNode = createNode(coeff, exp);
    struct Node *temp = head;

    if (head == NULL || head->exp < exp) {
        newNode->next = head;
        return newNode;
    }
    if (temp->exp == exp) {
        temp->coeff += coeff;
        free(newNode);
        return head;
    }

    while (temp->next != NULL && temp->next->exp > exp)
        temp = temp->next;

    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

// Read polynomial
struct Node* readPolynomial() {
    struct Node *poly = NULL;
    int n, coeff, exp;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter coefficient and exponent: ");
        scanf("%d %d", &coeff, &exp);
        poly = insertTerm(poly, coeff, exp);
    }
    return poly;
}

// Display polynomial
void displayPolynomial(struct Node *poly) {
    if (poly == NULL) {
        printf("0\n");
        return;
    }

    while (poly != NULL) {
        printf("%dx^%d", poly->coeff, poly->exp);
        if (poly->next != NULL)
            printf(" + ");
        poly = poly->next;
    }
    printf("\n");
}

// Add two polynomials
struct Node* addPolynomials(struct Node *p1, struct Node *p2) {
    struct Node *result = NULL;

    while (p1 != NULL && p2 != NULL) {
        if (p1->exp > p2->exp) {
            result = insertTerm(result, p1->coeff, p1->exp);
            p1 = p1->next;
        } else if (p1->exp < p2->exp) {
            result = insertTerm(result, p2->coeff, p2->exp);
            p2 = p2->next;
        } else {
            int sum = p1->coeff + p2->coeff;
            if (sum != 0)
                result = insertTerm(result, sum, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        }
    }

    while (p1 != NULL) {
        result = insertTerm(result, p1->coeff, p1->exp);
        p1 = p1->next;
    }

    while (p2 != NULL) {
        result = insertTerm(result, p2->coeff, p2->exp);
        p2 = p2->next;
    }

    return result;
}

// Main function
int main() {
    struct Node *poly1, *poly2, *sum;

    printf("Enter first polynomial:\n");
    poly1 = readPolynomial();

    printf("Enter second polynomial:\n");
    poly2 = readPolynomial();

    printf("\nPolynomial 1: ");
    displayPolynomial(poly1);

    printf("Polynomial 2: ");
    displayPolynomial(poly2);

    sum = addPolynomials(poly1, poly2);

    printf("Sum of Polynomials: ");
    displayPolynomial(sum);

    return 0;
}
