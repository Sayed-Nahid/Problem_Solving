#include<stdio.h>
int main()
{
    int v, t;
    double l, s;
    scanf("%d", &v);
    scanf("%d", &t);
    s = v * t;
    l = s / 12;
    printf("%0.3lf\n", l);
    return 0;
}
