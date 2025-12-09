// Can you create a program that multiplies two matrix (3 x 2)
// * (2 x 3) entered by the user and print the result out?

#include <stdio.h>

int main() {
    int a[2][3];   // 2 rows × 3 columns
    int b[3][2];   // 3 rows × 2 columns
    int c[2][2];   // result = 2 × 2
    int i, j, k;

    // Read A
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Read B
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("The first matrix you entered is\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("The second matrix you entered is\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    printf("The multiplication product of matrix A and matrix B :\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
