// Create a program that read in any 3 x 3 2D
// array and flip it horizontal, store in another
// array and print the result out.

#include <stdio.h>

int main() {
    int a[3][3];
    int b[3][3];
    int i, j;
    double det = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("You entered\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            b[j][i] = a[i][j];
        }
    }
    
    printf("Output\n");
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
