#include<stdio.h>
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if(x > y)
    {
        if(y > z)
        {
            printf("%d\n", z);
            printf("%d\n", y);
            printf("%d\n", x);
        }
        else
        {
            printf("%d\n", y);
            printf("%d\n", z);
            printf("%d\n", x);
        }
    }
    else if (y > x)
    {
        if(x > z)
        {
            printf("%d\n", z);
            printf("%d\n", x);
            printf("%d\n", y);
        }
        else
        {
            printf("%d\n", x);
            printf("%d\n", z);
            printf("%d\n", y);
        }
    }
    else if (z > x)
    {
       if(x > y)
       {
           printf("%d\n", y);
           printf("%d\n", x);
           printf("%d\n", z);
       }
       else
       {
           printf("%d\n", x);
           printf("%d\n", y);
           printf("%d\n", z);
       }
    }
    else if(x > z)
    {
       if(z > y)
       {
           printf("%d\n", y);
           printf("%d\n", z);
           printf("%d\n", x);
       }
       else
       {
           printf("%d\n", z);
           printf("%d\n", y);
           printf("%d\n", x);
       }
    }
    else if (y > z)
    {
        if(z > x)
        {
           printf("%d\n", x);
           printf("%d\n", z);
           printf("%d\n", y);
        }
        else
        {
            printf("%d\n", z);
            printf("%d\n", x);
            printf("%d\n", y);
        }
    }
    else if (z > y)
    {
        if(y > x)
        {
            printf("%d\n", x);
            printf("%d\n", y);
            printf("%d\n", z);
        }
        else
        {
            printf("%d\n", y);
            printf("%d\n", x);
            printf("%d\n", z);
        }
    }
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    return 0;
}
