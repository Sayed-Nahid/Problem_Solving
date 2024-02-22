#include<stdio.h>
int main()
{
    int t, y, i;
    scanf("%d", &t);
    for(i=0; i < t; i++)
    {
        scanf("%d", &y);
        y = y - 2015;
        if(y < 0)
        {
            printf("%d D.C.\n", -y);
        }
        else
        {
            printf("%d A.C.\n", y+1);
        }
    }
    return 0;
}
