#include<stdio.h>
int main()
{
    int x, i;
    scanf("%d", &x);
    for(i=1; i <= x; i++)
    {
        printf("%d ", i);
        printf("%d ", i*i);
        printf("%d\n", i*i*i);
    }
    return 0;
}
