#include<stdio.h>
int main()
{
    int x, i;
    scanf("%d", &x);
    for(i=0; i<10; i++)
    {
        printf("N[%d] = %d\n",i, x);
        x *= 2;
    }
    return 0;
}
