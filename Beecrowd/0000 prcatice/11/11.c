#include<stdio.h>
int main()
{
    int l, i, j;
    char ch[2];
    double arr[12][12], sum = 0.0;
    scanf("%d", &l);
    scanf("%s", &ch);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
    for(i=0; i < 12; i++)
    {
        sum += arr[l][i];
    }
    if(ch[0] == 'S')
    {
        printf("%0.1lf\n", sum);
    }
    else if(ch[0] == 'M')
    {
        printf("%0.1lf\n", sum/12);
    }
    return 0;
}



























/*#include<stdio.h>
int main()
{
    int arr[15], i, par[5], impar[5], p=0, im=0;
    for(i=0; i<15; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<15; i++)
    {
        if(arr[i]%2 == 0)
        {
            par[p] = arr[i];
            arr[i] = 0;
            p++;
        }
        if(p == 5)
        {
            break;
        }
    }
    for(i=0; i<15; i++)
    {
        if(arr[i]%2 != 0)
        {
            impar[im] = arr[i];
            arr[i] = 0;
            im++;
        }
        if(im == 5)
        {
            break;
        }
    }
    for(i=0; i<5; i++)
    {
        printf("par[%d] = %d\n", i, par[i]);
        par[i] = 0;
    }
    for(i=0; i<5; i++)
    {
        printf("impar[%d] = %d\n", i, impar[i]);
        impar[i] = 0;
    }
    p = 0;
    im = 0;
    for(i=0; i<15; i++)
    {
        if(arr[i] != 0)
        {
            if(arr[i] % 2 != 0)
            {
                impar[im] = arr[i];
                arr[i] = 0;
                im++;
            }
        }
    }
    for(i=0; i<im; i++)
    {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for(i=0; i<15; i++)
    {
        if(arr[i] != 0)
        {
            if(arr[i] % 2 == 0)
            {
                par[p] = arr[i];
                arr[i] = 0;
                p++;
            }
        }
    }
    for(i=0; i<p; i++)
    {
        printf("par[%d] = %d\n", i, par[i]);
    }
    return 0;
}*/





/*#include<stdio.h>
int main()
{
    int t, i, pa, pb, j;
    double ga, gb;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);
        ga = ga / 100;
        gb = gb / 100;

        printf("%lf", ga);
        for(j=1; j <= 100; j++)
        {
            pa += (pa*())
        }
    }
    return 0;
}*/
