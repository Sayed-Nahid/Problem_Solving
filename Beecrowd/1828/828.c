#include<stdio.h>
#include<string.h>
int main()
{
    int t, i;
    char a[8], b[8];
    scanf("%d", &t);
    for(i=1; i <= t; i++)
    {
        scanf("%s %s", &a, &b);
        if(!(strcmp(a, b)))
        {
            printf("Caso #%d: De novo! \n", i);
        }
        else if(!(strcmp(a, "tesoura")))
        {
            if((!(strcmp(b, "papel"))) || (!(strcmp(b, "lagarto"))))
            {
                printf("Caso #%d: Bazinga! \n", i);
            }
        }
        else if(!(strcmp(a, "papel")))
        {
            if((!(strcmp(b, "pedra"))) || (!(strcmp(b, "Spock"))))
            {
                printf("Caso #%d: Bazinga! \n", i);
            }
        }
        else if(!(strcmp(a, "pedra")))
        {
            if((!(strcmp(b, "lagarto"))) || (!(strcmp(b, "tesoura"))))
            {
                printf("Caso #%d: Bazinga! \n", i);
            }
        }
        else if(!(strcmp(a, "lagarto")))
        {
            if((!(strcmp(b, "Spock"))) || (!(strcmp(b, "papel"))))
            {
                printf("Caso #%d: Bazinga! \n", i);
            }
        }
        else if(!(strcmp(a, "Spock")))
        {
            if((!(strcmp(b, "tesoura"))) || (!(strcmp(b, "pedra"))))
            {
                printf("Caso #%d: Bazinga! \n", i);
            }
        }
    }
    return 0;
}
