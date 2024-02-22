#include<stdio.h>
int main()
{
    double a;
    scanf("%lf", &a);
    if(a > 0)
    {
        printf("+");
        printf("%0.4E\n", a);
    }
    else printf("%0.4E\n", a);
    return 0;
}
