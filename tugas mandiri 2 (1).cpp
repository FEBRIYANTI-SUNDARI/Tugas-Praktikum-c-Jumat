#include <stdio.h>

int main() 
{
   
    float alas = 8.0; 
    float tinggi = 5.0; 
    float luas;

    luas = 0.5 * alas * tinggi;

    printf("Luas segitiga dengan alas %.2f cm dan tinggi %.2f cm adalah: %.2f cm^2\n", alas, tinggi, luas);

    return 0;
}
