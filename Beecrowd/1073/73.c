#include<stdio.h>
int main()
{
    int N, i, mul;
    scanf("%d", &N);
    if(N % 2 == 0)
    {
        for(i = 2;  i <= N; i = i + 2)
        {
            mul = i * i;
            printf("%d^2 = %d\n", i, mul);
        }
    }
    else
    {
        N = N - 1;
        for(i = 2; i <= N; i = i + 2)
        {
            mul = i * i;
            printf("%d^2 = %d\n", i, mul);
        }
    }
    return 0;
}
