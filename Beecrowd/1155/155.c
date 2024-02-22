#include<stdio.h>
int main()
{
    float i;
    float s = 0;
    for(i=1; i<=100; i++)
    {
        s = s + (1 / i);
    }
    printf("%0.2f\n", s);
    return 0;
}
