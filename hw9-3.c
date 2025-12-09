// Can you create a program that multiplies two matrix (3 x 2)
// * (2 x 3) entered by the user and print the result out?

#include <stdio.h>

int main() {
    int a[2][3];   // first matrix 2x3
    int b[3][2];   // second matrix 3x2
    int c[2][2];   // result 2x2
    int i, j, k;

    // Read matrix A (2x3)
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Read matrix B (3x2)
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Print A
    printf("The first matrix you entered is\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Print B
    printf("The second matrix you entered is\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Multiply matrices → result = 2x2
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The multiplication product of matrix A and matrix B:\n"); 
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}




