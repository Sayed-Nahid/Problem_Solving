#include<stdio.h>
int main()
{
    int x, y, sum = 0;
    scanf("%d", &x);
    scanf("%d", &y);
    if(x % 2 == 0)
    {
        x = x - 1;
            for(x; x > y;)
            {
                sum = sum + x;
                x = x - 2;
            }
            printf("%d\n", sum);
    }

    else
        {
            x = x - 2;
            for(x; x > y;)
            {
                sum = sum + x;
                x = x - 2;
            }
            printf("%d\n", sum);
        }

    return 0;
}
