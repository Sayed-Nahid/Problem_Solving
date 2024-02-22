#include<stdio.h>
int main()
{
    int x, i, e[5], o[5], a=0, b=0, m;
    for(i=0; i < 15; i++)
    {
        scanf("%d", &x);
        if(x%2 ==0)
        {
            e[a] = x;
            a++;
            if(a == 5)
            {
                for(m=0; m < 5; m++)
                {
                    printf("par[%d] = %d\n", m, e[m]);
                    e[m] = 0;
                }
                a = 0;
            }
        }
        else
        {
            o[b] = x;
            b++;
            if(b == 5)
            {
                for(m=0; m < 5; m++)
                {
                    printf("impar[%d] = %d\n", m, o[m]);
                    o[m] = 0;
                }
                b = 0;
            }
        }
    }
    for(i = 0; i < 5; i++)
    {
        if(o[i] == 0)
        {
            break;
        }
        else
        {
           printf("impar[%d] = %d\n", i, o[i]);
        }
    }
    for(i=0; i < 5; i++)
    {
        if(e[i] == 0)
        {
            break;
        }
        else
        {
            printf("par[%d] = %d\n", i, e[i]);
        }
    }
    return 0;
}
