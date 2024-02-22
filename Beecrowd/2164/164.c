#include <stdio.h>
#include<math.h>
int main() {

    int n;
    double base1, base2, result;
    scanf("%d", &n);
    base1 = ((1 + sqrt(5))/2);
    base2 = ((1 - sqrt(5))/2);
    base1 = pow(base1, n);
    base2 = pow(base2, n);
    result = base1 - base2;
    result = result / sqrt(5);
    printf("%0.1lf\n", result);
    return 0;
}
