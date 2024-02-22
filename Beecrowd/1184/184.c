#include<stdio.h>
int main()
{
    int i, j, cj=0;
    char o[2];
    float m[12][12], sum = 0.0, c = 0.0;
    scanf("%s", &o);
    for(i=0; i < 12; i++)
    {
        for(j=0; j < 12; j++)
        {
            scanf("%f", &m[i][j]);
        }
    }
    for(i=1; i < 12; i++)
    {
        for(j=0; j <= cj; j++)
        {
            sum += m[i][j];
            c += 1;
        }
        cj += 1;
    }
    if(o[0] == 'S')
    {
        printf("%0.1f\n", sum);
    }
    else if(o[0] == 'M')
    {
        printf("%0.1f\n", sum/c);
    }
    return 0;
}
