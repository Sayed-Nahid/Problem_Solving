#include<stdio.h>
int main()
{
    int x, y, z, temp, a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    x = a;
    y = b;
    z = c;
    if(a > b)
    {
        temp = b;
        b = a;
        a = temp;
    }
    if(a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if(b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    printf("%d\n%d\n%d\n", a, b, c);
    printf("\n");
    printf("%d\n%d\n%d\n", x, y, z);
    return 0;
}
