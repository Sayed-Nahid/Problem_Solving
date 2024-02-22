#include<stdio.h>
int main()
{
    int t, i;
    double x, y, z;
    scanf("%d", &t);
    for(i=0; i < t; i++)
    {
        scanf("%lf %lf %lf", &x, &y, &z);
        printf("%.1lf\n", ((x*2)+(y*3)+(z*5))/10);
    }
    return 0;
}
