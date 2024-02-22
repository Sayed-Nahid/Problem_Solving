#include<stdio.h>
int main()
{
    int x1, x2, x3, x4, x5, i = 0;
    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &x3);
    scanf("%d", &x4);
    scanf("%d", &x5);
    if(x1 % 2 == 0)
    {
        i = i + 1;
    }
    if(x2 % 2 == 0)
    {
        i = i + 1;
    }
    if(x3 % 2 == 0)
    {
        i = i + 1;
    }
    if(x4 % 2 == 0)
    {
        i = i + 1;
    }
    if(x5 % 2 == 0)
    {
        i = i + 1;
    }
    printf("%d valores pares\n", i);
    return 0;
}
