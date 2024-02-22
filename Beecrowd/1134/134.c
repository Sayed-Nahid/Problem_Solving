#include<stdio.h>
int main()
{
    int n, al = 0, gas = 0, die = 0;
    printf("MUITO OBRIGADO\n");
    while(1)
    {
        scanf("%d", &n);
        if(n == 1)
        {
            al += 1;
        }
        else if(n == 2)
        {
            gas += 1;
        }
        else if (n == 3)
        {
            die += 1;
        }
        else if(n == 4)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    printf("Alcool: %d\n", al);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", die);
    return 0;
}
