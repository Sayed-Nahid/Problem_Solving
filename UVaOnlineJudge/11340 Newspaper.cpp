#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, npaidchar, i, nline, x, len, sum;
    map<string, int> store;
    string ch;
    string s;
    cin >> t;
    while(t--)
    {
        sum=0;
        cin >> npaidchar;
        while(npaidchar--)
        {
            cin >> ch >> x;
            store[ch]=x;
            ch = "";
        }
        cin >> nline;
        for(int j=0; j<=nline; j++)
        {
            getline(cin, s);
            len = s.length();
            for(i=0; i<len; i++)
            {
                ch = s[i];
                sum += store[ch];
            }
        }
        cout << fixed << setprecision(2) << (double) sum/100 << '$' << endl;
        store.clear();
    }
    return 0;
}