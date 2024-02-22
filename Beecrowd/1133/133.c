#include<stdio.h>
int main()
{
    int x, y, temp;
    scanf("%d", &x);
    scanf("%d", &y);
        if(x>y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        x += 1;
        for(x; x < y; x++)
        {
            if((x % 5 == 2) || (x % 5 == 3))
            {
                printf("%d\n", x);
            }

        }
    return 0;
}
