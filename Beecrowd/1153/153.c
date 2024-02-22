#include<stdio.h>
int main()
{
    int n, i, ans = 1;
    scanf("%d", &n);
    i = n;
    for(i; i >= 1; i--)
    {
        ans = ans * i;
    }
    printf("%d\n", ans);
    return 0;
}
