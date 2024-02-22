#include<stdio.h>
int main()
{
    int flag=0, a, c=0;
    double n, x, y;
    while(1)
    {
        scanf("%lf", &n);
        if((n >= 0) && (n <= 10) && (flag == 0))
        {
            x = n;
            flag = 1;
        }
        else if((n >= 0) && (n <= 10) && (flag == 1))
        {
            y = n;
            flag = 0;
            printf("media = %0.2lf\n", (y+x)/2);
            while(1)
            {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &a);
                if(a == 1)
                {
                    c = 1;
                    break;
                }
                else if(a == 2)
                {
                    c = 2;
                    break;
                }
                else
                {
                    continue;
                }
            }
            if(c == 1)
            {
                continue;
            }
            else if (c == 2)
            {
                break;
            }
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    return 0;
}
