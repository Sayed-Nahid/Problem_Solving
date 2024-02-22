#include<stdio.h>
int main()
{
    int n, i;
    float x, y, ans;
    scanf("%d", &n);
    for(i=0; i < n; i++)
    {
        scanf("%f %f", &x, &y);
        if(y == 0)
        {
            printf("divisao impossivel\n");
        }
        else if(x == 0)
        {
            printf("0.0\n");
        }
        else
        {
            ans = x / y;
            printf("%0.1f\n", ans);
        }
    }
    return 0;
}
