#include<stdio.h>
int main()
{
    int a, b, c, i;
    double h;
    while(1)
    {
        scanf("%d", &a);
        if(a == 0)
        {
            break;
        }
        else
        {
            scanf("%d %d", &b, &c);
            h = (a*b)*(100/c);
            for(i=1; i*i <= h; i++);
            i--;
            printf("%d\n", i);
            }
    }
    return 0;
}
