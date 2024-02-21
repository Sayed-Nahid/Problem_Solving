#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int n, sh, eh, sm, em, ms, me, ws, we, i;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        cin >> sh >> ch >> sm >> eh >> ch >> em;
        ms = sh*60+sm, me=eh*60+em;
        cin >> sh >> ch >> sm >> eh >> ch >> em;
        ws=sh*60+sm, we=eh*60+em;
        if(ws>me || we<ms) cout << "Case " << i << ": Hits Meeting\n";
        else cout << "Case " << i << ": Mrs Meeting\n";
    }
    return 0;
}