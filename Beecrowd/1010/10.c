#include<stdio.h>
int main()
{
    int code1, unit_for_code1, code2, unit_for_code2;
    double price1, price2, pay;
    scanf("%d %d %lf", &code1, &unit_for_code1, &price1);
    scanf("%d %d %lf", &code2, &unit_for_code2, &price2);
    pay = ((unit_for_code1 * price1) + (unit_for_code2 * price2));
    printf("VALOR A PAGAR: R$ %0.2lf\n", pay);
    return 0;
}
