#include<stdio.h>
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if(x > y)
    {
        if((y < z) || (y == z))
        {
            printf(":)\n");
        }
        else if(y > z)
        {
            x = x - y;
            y = y - z;
            if(y < x)
            {
                printf(":)\n");
            }
            else if(y > x)
            {
                printf(":(\n");
            }
        }

    }
    else if(x < y)
    {
        if((y > z) || (y == z))
        {
            printf(":(\n");
        }
        else if(y < z)
        {
            x = y - x;
            y = z - y;
            if(y < x)
            {
                printf(":(\n");
            }
            else if(y > x)
            {
                printf(":)\n");
            }
        }
    }
    else if(x == y)
    {
        if(y < z)
        {
           printf(":)\n");
        }
        else if(y > z)
        {
            printf(":(\n");
        }
    }
    return 0;
}
