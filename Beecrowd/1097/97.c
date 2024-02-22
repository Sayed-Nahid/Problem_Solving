#include<stdio.h>
int main()
{
    int i, j = 2, n;
    for(i = 1; i <= 9; i = i + 2)
    {
        j = j + 5;
        n = j - 2;
        for(j; j >= n; j--)
        {
            printf("I=%d J=%d\n", i, j);
        }
    }
    return 0;
}

