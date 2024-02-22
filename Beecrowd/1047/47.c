#include<stdio.h>
int main()
{
    int ih, im, eh, em;
    scanf("%d %d %d %d", &ih, &im, &eh, &em);
    if(ih == eh)
    {
        if(im == em)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24, 0);
        }
        else
        {
            if(im < em)
            {
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 0, em-im);
            }
            else if(im > em)
            {
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 23, (em+60)-im);
            }
        }
    }
    else if(ih > em)
    {
        if(im == em)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (eh+24) - ih, 0);
        }
        else
        {
            if(im < em)
            {
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (eh+24) - ih, em-im);
            }
            else if(im > em)
            {
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", ((eh+24) - ih) - 1, (em+60)-im);
            }
        }
    }
    else if(ih < eh)
    {
        if(im == em)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", eh - ih, 0);
        }
        else
        {
            if(im < em)
            {
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", eh - ih, em-im);
            }
            else if(im > em)
            {
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (eh - ih) - 1, (em+60)-im);
            }
        }
    }
    return 0;
}
