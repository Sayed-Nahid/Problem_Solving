#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, len, j;
    long long int rem;
    string a;
    int b;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> a >> b;
        len = a.length();
        rem=0, j=0;
        if(a[0] == '-') j=1;
        if(b < 0) b = abs(b);
        for(j; j<len; j++)
        {
            rem = (a[j] - '0') + rem*10;
            rem %=b;
        }
        if(rem==0) cout << "Case " << i << ": divisible\n";
        else cout << "Case " << i << ": not divisible\n";
    }
    return 0;
}