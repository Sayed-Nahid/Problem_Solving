#include<stdio.h>
int main()
{
    int x, h = 0, p, i;
    for(i = 1; i <= 100; i++)
    {
        scanf("%d", &x);
        if(h < x)
        {
            h = x;
            p = i;
        }
    }
    printf("%d\n", h);
    printf("%d\n", p);
    return 0;
}
