#include <stdio.h>

int main() {
    float a[3][3], adj[3][3], inv[3][3];
    float det;

    printf("--Inverse of a 3x3 Matrix--\n");
    printf("Enter elements of the matrix:\n");

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("Matrix[%d][%d]:",i,j);
            scanf("%f", &a[i][j]);
        }
    }

    // Calculate determinant
    det = a[0][0] * (a[1][1]*a[2][2] - a[1][2]*a[2][1])
        - a[0][1] * (a[1][0]*a[2][2] - a[1][2]*a[2][0])
        + a[0][2] * (a[1][0]*a[2][1] - a[1][1]*a[2][0]);

    if(det == 0) {
        printf("Determinant is zero. Matrix has no inverse.\n");
        return 0;
    }

    // Cofactors and adjoint
    adj[0][0] =  (a[1][1]*a[2][2] - a[1][2]*a[2][1]);
    adj[0][1] = -(a[1][0]*a[2][2] - a[1][2]*a[2][0]);
    adj[0][2] =  (a[1][0]*a[2][1] - a[1][1]*a[2][0]);

    adj[1][0] = -(a[0][1]*a[2][2] - a[0][2]*a[2][1]);
    adj[1][1] =  (a[0][0]*a[2][2] - a[0][2]*a[2][0]);
    adj[1][2] = -(a[0][0]*a[2][1] - a[0][1]*a[2][0]);

    adj[2][0] =  (a[0][1]*a[1][2] - a[0][2]*a[1][1]);
    adj[2][1] = -(a[0][0]*a[1][2] - a[0][2]*a[1][0]);
    adj[2][2] =  (a[0][0]*a[1][1] - a[0][1]*a[1][0]);

    // Divide adjoint by determinant to get inverse
    printf("Inverse of the matrix is:\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            inv[i][j] = adj[j][i] / det;
            printf("%f ", inv[i][j]);
        }
        printf("\n");
    }

    return 0;
}
