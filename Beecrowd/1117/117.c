#include<stdio.h>
int main()
{
    int flag = 0;
    float x, y, n, avg;
    while(1)
    {
        scanf("%f", &n);
        if((n >= 0) && (n <= 10) && (flag == 0))
        {
            x = n;
            flag = 1;
            continue;
        }
        if((n >= 0) && (n <= 10) && (flag == 1))
        {
            y = n;
            avg = (x + y)/ 2;
            printf("media = %0.2f\n", avg);
            break;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    return 0;
}
