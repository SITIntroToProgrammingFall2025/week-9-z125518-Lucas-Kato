// Create a program that read in 2 x 2 matrix and
// then calculate the determinant of that matrix.

#include <stdio.h>

int main() {
    int a[2][2];
    int i, j;
    double det = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("You entered\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    
    printf("Determinant is %f", det);

    return 0;
}
