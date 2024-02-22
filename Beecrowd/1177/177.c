#include<stdio.h>
int main()
{
    int t, n[1000], i, j;
    scanf("%d", &t);
    for(i=0; i<1000; )
    {
        for(j=0; j<t; j++)
        {
        printf("N[%d] = %d\n", i, j);
        i++;
        if(i == 1000)
        {
            break;
        }
        }
    }
    return 0;
}
