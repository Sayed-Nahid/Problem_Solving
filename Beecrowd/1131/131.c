#include<stdio.h>
int main()
{
    int i=0, g=0, x, y, m=0, n, c = 0;
    while(1)
    {
        scanf("%d %d", &x, &y);
        if(x>y)
        {
            i = i + 1;
        }
        else if(y > x)
        {
            g += 1;
        }
        m += 1;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &n);
        while(1)
        {
            if(n == 1)
            {
                c = 1;
                break;
            }
            else if(n == 2)
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
        else if(c == 2)
        {
            break;
        }
    }
    printf("%d grenais\n", m);
    printf("Inter:%d\n", i);
    printf("Gremio:%d\n", g);
    printf("Empates:%d\n", m-(i+g));
    if((i-g)>0)
    {
        printf("Inter venceu mais\n");
    }
    else if((i-g)<0)
    {
        printf("Gremio venceu mais\n");
    }
    return 0;
}
