#include<stdio.h>
#include<math.h>
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int an = mx(x, y);
    printf("%d eh o maior\n", mx(an, z));
    return 0;
}
