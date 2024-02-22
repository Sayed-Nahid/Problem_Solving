#include<stdio.h>
int main()
{
    double x, tax = 0;
    scanf("%lf", &x);
    if((x >= 0.0) && (x <= 2000.00))
    {
        printf("Isento\n");
    }
    else if((x >=2000.01) && (x <= 3000.00))
    {
        x -= 2000.00;
        if(x == 1000.00)
        {
            tax = 80;
            printf("R$ %0.2lf\n", tax);
        }
        else
        {
            tax = (x*0.08);
            printf("R$ %0.2lf\n", tax);
        }

    }
    else if((x >= 3000.01) && (x <= 4500.00))
    {
        x -= 3000.00;
        tax = 80.00;
        tax += (x*0.18);
        printf("R$ %0.2lf\n", tax);
    }
    else if(x > 4500.00)
    {
        x -= 4500.00;
        tax = 80+270;
        tax += (x*0.28);
        printf("R$ %0.2lf\n", tax);
    }
    return 0;
}
