#include<stdio.h>
int main()
{
    float i, j=1;
    float s = 0;
    for(i=1; i<=39; i+=2)
    {
        s += (i/j);
        j *= 2;
    }
    printf("%0.2f\n", s);
    return 0;
}
