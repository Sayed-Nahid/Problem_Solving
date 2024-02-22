#include<stdio.h>
int main()
{
    int n[100], i;
    double x;
    scanf("%lf", &x);
    for(i=0; i<100; i++)
    {
        printf("N[%d] = %0.4lf\n", i, x);
        x *= 0.5;
    }
    return 0;
}
