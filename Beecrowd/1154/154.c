#include<stdio.h>
int main()
{
    int n[100], i;
    float  sum =0, count = 0, ans;
    for(i=0; i<100; i++)
    {
        scanf("%d", &n[i]);
        if(n[i] < 0)
        {
            break;
        }
        else
        {
            sum = sum + n[i];
        }
        count = count + 1;
    }
    ans = sum / count;
    printf("%0.2f\n", ans);
    return 0;
}
