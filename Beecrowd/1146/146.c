#include<stdio.h>
int main()
{
    int n, i;
    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
        {
            break;
        }
        else
        {
            for(i=1; i <= n; i++)
            {
                if(i != n)
                {
                    printf("%d ", i);
                }
                if(i == n)
                {
                    printf("%d", i);
                    printf("\n");
                }
            }
        }
    }
    return 0;
}
