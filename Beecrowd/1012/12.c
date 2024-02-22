#include<stdio.h>
#define PI 3.14159
int main()
{
    double A, B, C, triangle, circle, trapezium, square, rectangle;
    scanf("%lf %lf %lf", &A, &B, &C);
    triangle = (1.0/2) * A * C;
    printf("TRIANGULO: %0.3lf\n", triangle);
    circle = PI *(C * C);
    printf("CIRCULO: %0.3lf\n", circle);
    trapezium = ((1.0/2)*(A + B)) * C;
    printf("TRAPEZIO: %0.3lf\n", trapezium);
    square = B * B;
    printf("QUADRADO: %0.3lf\n", square);
    rectangle = A * B;
    printf("RETANGULO: %0.3lf\n", rectangle);
    return 0;
}
