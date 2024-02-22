#include<stdio.h>
int main()
{
    double arr[6], sum=0;
    int i, c=0;
    for(i=0; i<6; i++)
    {
        scanf("%lf", &arr[i]);
        if(arr[i]>0)
        {
            sum += arr[i];
            c++;
        }
    }
    printf("%d valores positivos\n", c);
    printf("%.1lf\n", sum/c);
    return 0;
}
