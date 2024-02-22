#include<stdio.h>
int main()
{
    double salary, bonus;
    scanf("%lf", &salary);
    if((salary > 0) && (salary <= 400.00))
    {
        bonus = salary * 0.15;
        printf("Novo salario: %0.2lf\n", (salary + bonus));
        printf("Reajuste ganho: %0.2lf\n", bonus);
        printf("Em percentual: 15 %%\n");
    }
    else if ((salary >= 400.01) && (salary <= 800.00))
    {
        bonus = salary * 0.12;
        printf("Novo salario: %0.2lf\n", (salary + bonus));
        printf("Reajuste ganho: %0.2lf\n", bonus);
        printf("Em percentual: 12 %%\n");
    }
    else if ((salary >= 800.01) && (salary <= 1200.00))
    {
        bonus = salary * 0.1;
        printf("Novo salario: %0.2lf\n", (salary + bonus));
        printf("Reajuste ganho: %0.2lf\n", bonus);
        printf("Em percentual: 10 %%\n");
    }
    else if ((salary >= 1200.01) && (salary <= 2000.00))
    {
        bonus = salary * 0.07;
        printf("Novo salario: %0.2lf\n", (salary + bonus));
        printf("Reajuste ganho: %0.2lf\n", bonus);
        printf("Em percentual: 7 %%\n");
    }
    else if (salary > 2000.00)
    {
        bonus = salary * 0.04;
        printf("Novo salario: %0.2lf\n", (salary + bonus));
        printf("Reajuste ganho: %0.2lf\n", bonus);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
