#include<stdio.h>
#include<math.h>
int main()
{
    double A, B, C, x, r1, r2;
    scanf("%lf %lf %lf", &A, &B, &C);
    x = ((B * B)- (4 * A * C));
    if(x < 0 || A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        r1 = (((-B) + sqrt(x)) / (2*A));
        r2 = (((-B) - sqrt(x)) / (2*A));
        printf("R1 = %0.5lf\n", r1);
        printf("R2 = %0.5lf\n", r2);
    }
    return 0;
}
