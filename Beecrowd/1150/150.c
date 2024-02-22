#include<stdio.h>
int main()
{
    int x, z, i=1, sum;
    scanf("%d", &x);
    while(1)
    {
        scanf("%d", &z);
        if(z>x)
        {
            break;
        }
    }
    sum = x;
    while(1)
    {
        x += 1;
        sum  += x;
        i += 1;
        if(sum > z)
        {
            break;
        }
    }
    printf("%d\n", i);
    return 0;
}
