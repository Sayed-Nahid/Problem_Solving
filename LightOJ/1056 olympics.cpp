#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, cno;
    double a, b, r, theta, ratio, cir, l, w;
    cin >> t;
    for(cno=1; cno<=t; cno++){
        scanf("%lf : %lf", &a, &b);
        r = sqrt(a*a+b*b)/2.0;
        theta = acos((2.0*r*r - b*b)/(2.0*r*r));
        cir = r*theta;
        ratio = 400.0/(2*cir+2*a);
        printf("Case %d: %.6f %.6f\n", cno, ratio*a, ratio*b);
    }
    return 0;
}