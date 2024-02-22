#include<stdio.h>
int main()
{
    int N, ase100, baki100, ase50, baki50, ase20, baki20, ase10, baki10, ase5, baki5, ase2, baki2, ase1;
    scanf("%d", &N);
    ase100 = N / 100;
    baki100 = N % 100;
    ase50 = baki100 / 50 ;
    baki50 = baki100 % 50;
    ase20 = baki50 / 20;
    baki20  = baki50 % 20;
    ase10 = baki20 / 10;
    baki10 = baki20 % 10;
    ase5 = baki10 / 5;
    baki5 = baki10 % 5;
    ase2 = baki5 / 2;
    baki2 = baki5 % 2;
    ase1 = baki2 / 1;
    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", ase100);
    printf("%d nota(s) de R$ 50,00\n", ase50);
    printf("%d nota(s) de R$ 20,00\n", ase20);
    printf("%d nota(s) de R$ 10,00\n", ase10);
    printf("%d nota(s) de R$ 5,00\n", ase5);
    printf("%d nota(s) de R$ 2,00\n", ase2);
    printf("%d nota(s) de R$ 1,00\n", ase1);
    return 0;
}
