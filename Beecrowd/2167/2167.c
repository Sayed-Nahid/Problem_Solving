#include<stdio.h>
int main()
{
    int t , i, c=0;
    scanf("%d", &t);
    int arr[t];
    for(i=0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i < t-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            printf("%d\n", i+2);
            c++;
            break;
        }
    }
    if(c == 0)
    {
        printf("0\n");
    }
    return 0;
}
