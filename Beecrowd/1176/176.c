#include<stdio.h>
int main()
{
    int x, i, j, f;
    long long int  arr[60];
        arr[0] = 0;
        arr[1] = 1;
        for(j=2; j <= 60; j++)
        {
            arr[j] = arr[j-1] + arr[j - 2];
        }
    scanf("%d", &x);
    for(i=0; i < x; i++)
    {
        scanf("%d", &f);
        printf("Fib(%d) = %lld\n", f, arr[f]);
    }
    return 0;
}
