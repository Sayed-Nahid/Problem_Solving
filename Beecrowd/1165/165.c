#include<stdio.h>
int main()
{
    int t, x, i, c, j;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        c=0;
        scanf("%d", &x);
        for(j=2; j<x; j++)
        {
            if(x%j == 0)
            {
                c += 1;
                break;
            }
        }
        if(c == 1)
        {
            printf("%d nao eh primo\n", x);
        }
        else
        {
            printf("%d eh primo\n", x);
        }
    }
    return 0;
}
