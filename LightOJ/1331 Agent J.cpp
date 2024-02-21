#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    double r1, r2, r3, a, b, c, s, angel1, angel2, angel3;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> r1 >> r2 >> r3;
        cout << "Case " << i << ": ";
        a = r1+r2;
        b = r1+r3;
        c = r2+r3;
        s = (a+b+c)/2.0;
        angel1 = acos((a*a+b*b-c*c)/(2*a*b));
        angel2 = acos((a*a+c*c-b*b)/(2*a*c));
        angel3 = acos((b*b+c*c-a*a)/(2*b*c));
        printf("%.10lf\n", (sqrt(s*(s-a)*(s-b)*(s-c))) - ((0.5*r1*r1*angel1)+(0.5*r2*r2*angel2)+(0.5*r3*r3*angel3)));
    }
    return 0;
}