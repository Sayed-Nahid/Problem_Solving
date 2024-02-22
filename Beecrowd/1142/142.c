#include<stdio.h>
int main()
{
    int n, i, x=0, j;
    scanf("%d", &n);
    for(i=1; i <= n; i++)
    {
        x += 1;
        for(j=1;j<4; j++)
        {
            printf("%d ", x);
            x += 1;
        }
        printf("PUM\n");
    }
    return 0;
}
