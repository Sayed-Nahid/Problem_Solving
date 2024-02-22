#include<stdio.h>
int main()
{
    int X;
    float Y, avr;
    scanf("%d", &X);
    scanf("%f", &Y);
    avr = X / Y;
    printf("%0.3f km/l\n", avr);
    return 0;
}
