#include<stdio.h>
int main()
{
    int arr[100], i;
    for(i=0; i < 100; i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp = arr[0], p = 1;
    for(i=1; i < 100; i++)
    {
        if(arr[i] > temp)
        {
            temp = arr[i];
            p = i+1;
        }
    }
    printf("%d\n", temp);
    printf("%d\n", p);
    return 0;
}
