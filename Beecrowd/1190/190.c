#include<stdio.h>
int main()
{
    int i, j, si=1, ei=10;
    char o[2];
    double m[12][12], sum = 0, c = 0;
    scanf("%s", &o);
    for(i=0; i < 12; i++)
    {
        for(j=0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }
    for(j=11; j >= 7; j--)
    {
        for(i=si; i <= ei; i++)
        {
            sum += m[i][j];
            c++;
        }
        si++;
        ei--;
    }
    if(o[0] == 'S')
    {
        printf("%0.1lf\n", sum);
    }
    else if(o[0] == 'M')
    {
        printf("%0.1lf\n", sum/c);
    }
    return 0;
}
