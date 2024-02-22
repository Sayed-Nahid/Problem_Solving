#include<stdio.h>
int main()
{
    int x, a[46], i;
    scanf("%d", &x);
    a[0] = 0;
    a[1] = 1;
    for(i=2; i < x; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    for(i=0; i < x; i++)
    {
        if(i == 0)
        {
            printf("%d", a[i]);
        }
        else
        {
            printf(" %d", a[i]);
        }
    }
    printf("\n");
    return 0;
}
