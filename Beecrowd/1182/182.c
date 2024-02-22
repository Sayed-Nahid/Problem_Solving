#include<stdio.h>
int main()
{
    int c, i, j;
    char ch[2];
    float m [12][12], sum = 0.0;
    scanf("%d", &c);
    scanf("%s", &ch);
    for(i=0; i < 12; i++)
    {
        for(j=0; j < 12; j++)
        {
            scanf("%f", &m[i][j]);
        }
    }
    for(i=0; i < 12; i++)
    {
        sum += m[i][c];
    }
    if(ch[0] == 'S')
    {
        printf("%0.1f\n", sum);
    }
    else if (ch[0] == 'M')
    {
        printf("%0.1f\n", sum/12.0);
    }
    return 0;
}
