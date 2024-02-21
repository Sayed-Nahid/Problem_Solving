#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, len, mod, j, flag;
    string s, sr;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> s;
        sr = s;
        reverse(sr.begin(), sr.end());
        if(s != sr) cout << "Case " << i << ": No\n";
        else cout << "Case " << i << ": Yes\n";
    }
    return 0;
}