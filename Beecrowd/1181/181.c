#include<stdio.h>
int main()
{
    char ch[2];
    int i, j, n;
    double m[12][12], sum = 0.0;
    scanf("%d %s", &n, &ch);
    for(i=0; i < 12; i++)
    {
        for(j=0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }
            for(i=0; i < 12; i++)
            {
                sum += m[n][i];
            }
            if(ch[0] == 'S')
            {
                printf("%0.1lf\n", sum);
            }
            else if( ch[0] == 'M')
            {
                printf("%0.1lf\n", sum/12.0);
            }
    return 0;
}
