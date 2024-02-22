#include<stdio.h>
int main()
{
    int x, i, j, halfx, k, a, b;
    while(1)
    {
        scanf("%d", &x);
        if(x != 0)
        {
            int arr[x][x];
            halfx = x/2;
            a=0;
            b=0;
            if(x%2!=0)
            {
                halfx++;
            }
            for(k=1; k<=halfx; k++)
            {
                for(i=a; i<x-a; i++)
                {
                    for(j=b; j<x-b; j++)
                    {
                       arr[i][j] = k;
                    }
                }
                a++;
                b++;

            }
            for(i=0; i<x; i++)
            {
                for(j=0; j<x; j++)
                {
                    if(j == 0)
                    {
                        printf("%3d", arr[i][j]);
                    }
                    else
                    {
                        printf("%4d", arr[i][j]);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
        else
            break;
    }
    return 0;
}
