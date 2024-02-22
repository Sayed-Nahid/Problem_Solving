#include<stdio.h>
int main()
{
    int n, x, y, j, sum, i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        sum=0;
        scanf("%d %d", &x, &y);
        if(x%2==0)
        {
            x += 1;
        }
        for(j=0; j < y; j++)
        {
            sum += x;
            x += 2;
        }
        printf("%d\n", sum);
    }
    return 0;
}
