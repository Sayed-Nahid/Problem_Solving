#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, r1, r2, c2, c1, i;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> r1 >> c1 >> r2 >> c2;
        if(r1-c1 == r2-c2|| r1+c1 == r2+c2) cout << "Case " << i << ": 1\n";
        else if((abs(r1-c1))%2 == (abs(r2-c2))%2) cout << "Case " << i << ": 2\n";
        else cout << "Case " << i << ": impossible\n";
    }
    return 0;
}