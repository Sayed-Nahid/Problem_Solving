#include<stdio.h>
int main()
{
    int x, y, i;
    scanf("%d", &x);
    for(i = 0; i < x; i++)
    {
        scanf("%d", &y);
        if(y < 0)
        {
            if(y % 2 == 0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }
        else if(y > 0)
        {
            if(y % 2 == 0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("ODD POSITIVE\n");
            }
        }
        else if (y == 0)
        {
            printf("NULL\n");
        }
    }
    return 0;
}
