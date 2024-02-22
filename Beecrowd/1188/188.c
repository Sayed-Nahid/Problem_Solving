#include<stdio.h>
int main()
{
    int i, j, js=5, je=6;
    char o[2];
    double m[12][12], sum = 0.0, c = 0.0;
    scanf("%s", &o);
    for(i=0; i < 12; i++)
    {
        for(j=0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }
    for(i=7; i < 12; i++)
    {
        for(j=js; j <= je; j++)
        {
            sum += m[i][j];
            c++;
        }
        js--;
        je++;
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
