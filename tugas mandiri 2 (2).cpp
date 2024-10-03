#include <stdio.h>
#include <math.h>

int main() 
{

    float diameter = 15.0; 
    float r; 
    float volume; 

    r = diameter / 2;

    // Menghitung volume bola dengan rumus V = (4/3) * p * r^3
    volume = (4.0 / 3.0) * M_PI * pow(r, 3);

    printf("Volume bola dengan diameter %.2f cm adalah: %.2f cm^3\n", diameter, volume);

    return 0;
}
