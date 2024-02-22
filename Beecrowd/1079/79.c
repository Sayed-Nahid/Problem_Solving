#include<stdio.h>
int main()
{
    int t, i;
    float x, y, z, avr;
    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf("%f %f %f", &x, &y, &z);
        avr = ((x * 2) + (y * 3) + (z * 5)) / 10;
        printf("%0.1f\n", avr);
    }
    return 0;
}
