#include<stdio.h>
int main()
{
    int x, y, temp, sum = 0;
    scanf("%d", &x);
    scanf("%d", &y);
    if(x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    for(x; x <= y; x++)
    {
        if(x % 13 != 0)
        {
            sum = sum + x;
        }
    }
    printf("%d\n", sum);
    return 0;
}
