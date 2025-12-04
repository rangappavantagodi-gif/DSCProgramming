#include <stdio.h>

#define SIZE 3

// Function to find determinant of 3x3 matrix
float determinant(float a[SIZE][SIZE]) {
    float det = 0;
    det = a[0][0] * (a[1][1]*a[2][2] - a[1][2]*a[2][1])
        - a[0][1] * (a[1][0]*a[2][2] - a[1][2]*a[2][0])
        + a[0][2] * (a[1][0]*a[2][1] - a[1][1]*a[2][0]);
    return det;
}

// Function to compute inverse of 3x3 matrix
int inverse(float a[SIZE][SIZE], float inv[SIZE][SIZE]) {
    float det = determinant(a);
    if (det == 0) {
        return 0; // inverse does not exist
    }

    float adj[SIZE][SIZE];

    // Find adjoint (cofactor transpose)
    adj[0][0] =  (a[1][1]*a[2][2] - a[1][2]*a[2][1]);
    adj[0][1] = -(a[0][1]*a[2][2] - a[0][2]*a[2][1]);
    adj[0][2] =  (a[0][1]*a[1][2] - a[0][2]*a[1][1]);

    adj[1][0] = -(a[1][0]*a[2][2] - a[1][2]*a[2][0]);
    adj[1][1] =  (a[0][0]*a[2][2] - a[0][2]*a[2][0]);
    adj[1][2] = -(a[0][0]*a[1][2] - a[0][2]*a[1][0]);

    adj[2][0] =  (a[1][0]*a[2][1] - a[1][1]*a[2][0]);
    adj[2][1] = -(a[0][0]*a[2][1] - a[0][1]*a[2][0]);
    adj[2][2] =  (a[0][0]*a[1][1] - a[0][1]*a[1][0]);

    // Compute inverse = adjoint / determinant
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            inv[i][j] = adj[i][j] / det;

    return 1;
}

int main() {
    float A[SIZE][SIZE], B[SIZE][SIZE], Binv[SIZE][SIZE], C[SIZE][SIZE];

    printf("Enter matrix A (3x3):\n");
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%f", &A[i][j]);

    printf("Enter matrix B (3x3):\n");
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%f", &B[i][j]);

    // Compute inverse of B
    if (!inverse(B, Binv)) {
        printf("Matrix B is singular. Division not possible.\n");
        return 0;
    }

    // Multiply A × Binv
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            C[i][j] = 0;
            for (int k = 0; k < SIZE; k++)
                C[i][j] += A[i][k] * Binv[k][j];
        }
    }

    printf("\nResult of A / B = A × inverse(B):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            printf("%f ", C[i][j]);
        printf("\n");
    }

    return 0;
}
