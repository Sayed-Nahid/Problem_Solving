#include<stdio.h>
int main()
{
    int pa, pb, t, i, ai, bi, j;
    double ra, rb;
    scanf("%d", &t);
    for(i=0; i < t; i++)
    {
        j=0;
        scanf("%d %d %lf %lf", &pa, &pb, &ra, &rb);
        while(pa <= pb)
        {
            pa = pa + ((pa * ra)/100);
            pb = pb + ((pb * rb)/100);
            j++;
            if(j > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
       if(j <= 100) printf("%d anos.\n", j);
    }
    return 0;
}
