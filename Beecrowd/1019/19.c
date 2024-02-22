#include<stdio.h>
int main()
{
    int N, g, gs, m, ms, s;
    scanf("%d", &N);
    g = N / 3600 ;
    gs = N % 3600;
    m = gs / 60;
    ms = gs % 60;
    s = ms ;
    printf("%d:%d:%d\n", g, m, s);
    return 0;
}
