#include<stdio.h>
int main()
{
    float x1, x2, x3, x4, x5, x6, sum = 0, avr;
    int  i = 0;
    scanf("%f", &x1);
    scanf("%f", &x2);
    scanf("%f", &x3);
    scanf("%f", &x4);
    scanf("%f", &x5);
    scanf("%f", &x6);
    if(x1 > 0)
    {
        sum = sum + x1;
        i = i + 1;
    }
    if(x2 > 0)
    {
        sum = sum + x2;
        i = i + 1;
    }
    if(x3 > 0)
    {
        sum = sum + x3;
        i = i + 1;
    }
    if(x4 > 0)
    {
        sum = sum + x4;
        i = i + 1;
    }
    if(x5 > 0)
    {
        sum = sum + x5;
        i = i + 1;
    }
    if(x6 > 0)
    {
        sum = sum + x6;
        i = i + 1;
    }
    printf("%d valores positivos\n", i);
    sum = sum * 100;
    avr = sum / i;
    printf("%0.1f\n", (avr/100));
    return 0;
}

