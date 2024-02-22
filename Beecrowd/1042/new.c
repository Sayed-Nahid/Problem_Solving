#include<stdio.h>
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if((y > z)  && (x > y ))
    {
        printf("%d\n", z);
        printf("%d\n", y);
        printf("%d\n", x);
    }
    else if ((x > z)  && (y > x) )
    {
        printf("%d\n", z);
        printf("%d\n", x);
        printf("%d\n", y);
    }
    else if ((x > y)  && (z > x))
    {
        printf("%d\n", y);
        printf("%d\n", x);
        printf("%d\n", z);
    }
    printf("\n");
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    return 0;
}
