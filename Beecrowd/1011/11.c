#include<stdio.h>
#define PI 3.14159
int main()
{
    double R, vol;
    scanf("%lf", &R);
    vol = ((4.0/3) * PI * (R * R * R));
    printf("VOLUME = %0.3lf\n", vol);
    return 0;
}
