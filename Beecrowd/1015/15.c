#include<stdio.h>
#include<math.h>
int main()
{
    double x1, x2, y1, y2, distance, value1, value2, x1x2, y1y2, xpow, ypow, add;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    value1 = 0.5;
    value2 = 2;
    x1x2 = x2 - x1;
    y1y2 = y2 - y1;
    xpow = pow(x1x2, value2);
    ypow = pow(y1y2, value2);
    add = xpow + ypow;
    distance = pow(add, value1);
    printf("%0.4lf\n", distance);
    return 0;
}
