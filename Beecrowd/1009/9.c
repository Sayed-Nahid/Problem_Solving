#include<stdio.h>
int main()
{
    double salary, sold_by, total, add;
    char name[30];
    gets(name);
    scanf("%lf", &salary);
    scanf("%lf", &sold_by);
    add = (sold_by * 0.15);
    total = (salary + add);
    printf("TOTAL = R$ %0.2lf\n", total);
    return 0;
}
