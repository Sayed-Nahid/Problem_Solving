#include<stdio.h>
int main()
{
    int x, i, temp = 0, p = 0;
    scanf("%d", &x);
    int arr[x];
    for(i=0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i < x; i++)
    {
        if(i == 0)
        {
            temp = arr[0];
            p = i;
        }
        else
        {
            if(arr[i] < temp)
            {
                temp = arr[i];
                p = i;
            }
        }
    }
    printf("Menor valor: %d\n", temp);
    printf("Posicao: %d\n", p);
    return 0;
}
