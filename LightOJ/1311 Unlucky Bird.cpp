#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    double v1, v2, v3, a1, a2;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> v1 >> v2 >> v3 >> a1 >> a2;
        cout << "Case " << i << ": ";
        cout << setprecision(10) << fixed << (pow(v1, 2)/(2*a1))+(pow(v2, 2)/(2*a2)) << ' ' << v3*max(v1/a1, v2/a2) << endl;
    }
    return 0;
}