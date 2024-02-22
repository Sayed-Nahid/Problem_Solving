#include<stdio.h>
int main()
{
    int x, i, n, sum = 0, c = 0, r = 0, s = 0;
    float rp, sp, cp;
    char ch;
    scanf("%d", &x);
    for(i=0; i < x; i++)
    {
        scanf("%d %c", &n, &ch);
        sum = sum + n;
        if(ch == 'C')
        {
            c = c + n;
        }
        else if(ch == 'R')
        {
            r = r + n;
        }
        else if(ch == 'S')
        {
            s = s + n;
        }
    }
    printf("Total: %d cobaias\n", sum);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    cp = c;
    rp = r;
    sp = s;
    printf("Percentual de coelhos: %0.2f %%\n", ((cp/sum)*100));
    printf("Percentual de ratos: %0.2f %%\n", (rp/sum)*100);
    printf("Percentual de sapos: %0.2f %%\n", (sp/sum)*100);
    return 0;
}
