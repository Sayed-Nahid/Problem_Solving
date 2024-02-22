#include<stdio.h>
int main()
{
    int n, i, a, temp = 0, j, c = 0;
    scanf("%d", &n);
    int x[n];
    for(i=0; i<n;i++)
    {
        scanf("%d", &x[i]);
        if(i==0)
        {
            temp=x[i];
        }
        if(temp>x[i])
        {
            j = i;
            a = x[i];
            c++;
        }
    }
    if(c == 0)
    {
    printf("Menor valor: %d\n", temp);
    printf("Posicao: %d\n", 0);
    }
    else
    {
    printf("Menor valor: %d\n", a);
    printf("Posicao: %d\n", j);
    }
    return 0;
}
