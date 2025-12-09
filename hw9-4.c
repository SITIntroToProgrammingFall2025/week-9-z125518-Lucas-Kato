// Create a program that would calculate
// any input RGB values to hexadecimal
// code

#include <stdio.h>

int main() {
    
    char hexadecimal[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    
    double rgb[1][3]; 
    int j;
    double num = 0;
    char hex[20] = "#";
    int count = 1;


    for (j = 0; j < 3; j++) {
        scanf("%lf", &rgb[0][j]);
    }

    for (j = 0; j < 3; j++) {
        num = rgb[0][j];
        num = num / 16;
        int inteira = (int)num;
        hex[count] = hexadecimal[inteira];
        count++;
        double decimal = num - inteira;
        int decimal2 = (int)(decimal * 16);
        hex[count] = hexadecimal[decimal2];
        count++;
    }
    
     printf("The hex code is %s", hex);
    
    return 0;
}




