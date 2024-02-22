#include<stdio.h>
int main()
{
    int n, i, x, y, temp, sum = 0;
    scanf("%d", &n);
    for(i=0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        if(x>y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        x+=1;
        for(x; x < y; x++)
        {
           if(x%2 == 0)
           {

           }
           else
           {
               sum = sum + x;
           }
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}
