#include<stdio.h>
int main()
{
    int sd, ed, sh, eh, sm, em, ss, es, sts, ets, result = 0;
    scanf("%*s %d", &sd);
    scanf("%d %*s %d %*s %d", &sh, &sm, &ss);
    scanf("%*s %d", &ed);
    scanf("%d %*s %d %*s %d", &eh, &em, &es);
    sts = ss + (sm * 60) + (sh * 60 * 60) + (sd * 24 * 60 * 60);
    ets = es + (em * 60) + (eh * 60 * 60) + (ed * 24 * 60 * 60);
    result = ets - sts;
    printf("%d dia(s)\n", result/86400);
    result %= 86400;
    printf("%d hora(s)\n", result/3600);
    result %= 3600;
    printf("%d minuto(s)\n", result/60);
    result %= 60;
    printf("%d segundo(s)\n", result);
    return 0;

}
