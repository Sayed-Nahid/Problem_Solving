#include<stdio.h>
int main()
{
    int x, i, c=0;
    for(i=0; i < 5; i++)
    {
        scanf("%d", &x);
        if(x%2==0)
        {
            c++;
        }
    }
    printf("%d valores pares\n", c);
    return 0;
}
