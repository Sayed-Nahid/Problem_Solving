#include<stdio.h>
int main()
{
    float A, B, C, pera, tra;
    scanf("%f %f %f", &A, &B, &C);
    if(((A+B)>C) && ((B+C)>A) && ((C+A)>B))
    {
        pera = (A + B + C);
        printf("Perimetro = %0.1f\n", pera);
    }
    else
    {
        tra = (((A + B) / 2) * C);
        printf("Area = %0.1f\n", tra);
    }
    return 0;
}
