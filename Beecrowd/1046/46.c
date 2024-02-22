#include<stdio.h>
int main()
{
    int start, end, sub, sum1;
    scanf("%d %d", &start, &end);
    if(start > end)
    {
        sub = 24 - start;
        sum1 = sub + end;
        printf("O JOGO DUROU %d HORA(S)\n", sum1);
    }
    else if (start == end)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if (start < end)
    {
        printf("O JOGO DUROU %d HORA(S)\n", (end - start));
    }
    return 0;
}
