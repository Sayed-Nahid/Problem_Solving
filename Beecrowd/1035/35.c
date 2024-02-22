#include<stdio.h>
int main()
{
    int A, B, C, D, x, y;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    if(B > C)
    {
        if(D > A)
        {
            x = C + D;
            y = A + B;
            if(x > y)
            {
                if(C >= 0)
                {
                    if(D >= 0)
                    {
                        if(A % 2 == 0)
                        {
                            printf("Valores aceitos\n");
                        }
                    }
                }
            }
        }
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
    return 0;
}
