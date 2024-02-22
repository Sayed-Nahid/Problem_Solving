#include<stdio.h>
int main()
{
    int v, i, j, c=0, ghurbe;
    while(1)
    {
        scanf("%d", &v);
        if(v == 0)
        {
            break;
        }
        int arr[v][v];
        for(i=1; i<=v; i++)
        {
            int flag = 0;
            printf("  ");
            int space_flag = 0;
            for(j=i, ghurbe=0; ghurbe<v; ghurbe++)
            {
                if(space_flag == 0)
                {
                    space_flag = 1;
                    if((j == 1) && (flag == 0))
                    {
                        printf("%d", j);
                        j++;
                        flag++;
                    }
                    else if(flag == 1)
                    {
                        printf("%d", j);
                        j++;
                    }
                    else if(flag == 0)
                    {
                        printf("%d", j);
                        j--;
                    }
                }
                else
                {
                    if((j == 1) && (flag == 0))
                    {
                        printf("   %d", j);
                        j++;
                        flag++;
                    }
                    else if(flag == 1)
                    {
                        printf("   %d", j);
                        j++;
                    }
                    else if(flag == 0)
                    {
                        printf("   %d", j);
                        j--;
                    }
                }
            }
            printf("\n");
        }
        //printf("\n");
    }
    return 0;
}
