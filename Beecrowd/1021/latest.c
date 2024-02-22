#include<stdio.h>
int main()
{
    double x, h = 0.5;
    int y, n, z;
    scanf("%lf", &x);
     y = x;
     printf("NOTAS:\n");
     n = y / 100;
     printf("%d nota(s) de R$ 100.00\n", n);
     y = y % 100;
     n = y / 50;
     printf("%d nota(s) de R$ 50.00\n", n);
     y = y % 50;
     n = y / 20;
     printf("%d nota(s) de R$ 20.00\n", n);
     y = y % 20;
     n = y / 10;
     printf("%d nota(s) de R$ 10.00\n", n);
     y = y % 10;
     n = y / 5;
     printf("%d nota(s) de R$ 5.00\n", n);
     y = y % 5;
     n = y / 2;
     printf("%d nota(s) de R$ 2.00\n", n);
     y = y % 2;
     printf("MOEDAS:\n");
     printf("%d moeda(s) de R$ 1.00\n", y);
     y = x;
     x = x - y;
     z = x * 1000;
     y = z / 500;
     printf("%d moeda(s) de R$ 0.50\n", y);
     z = z % 500;
     y = z / 250;
     printf("%d moeda(s) de R$ 0.25\n", y);
     z = z % 250;
     y = z / 100;
     printf("%d moeda(s) de R$ 0.10\n", y);
     z = z % 100;
     y = z / 50;
     printf("%d moeda(s) de R$ 0.05\n", y);
     z = z % 50;
     y = z / 10;
     printf("%d moeda(s) de R$ 0.01\n", y);
    return 0;
}
