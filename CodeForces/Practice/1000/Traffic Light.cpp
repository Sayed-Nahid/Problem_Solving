#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, x, i, ans,gotg, j;
    string s;
    char fchar;
    cin >> t;
    while(t--){
        cin >> x >> fchar;
        cin >> ws;
        cin >> s;
        ans=gotg=0;
        s =s+s;
        for(i=(2*x)-1; i>=0; i--){
            if(s[i] == 'g') gotg=i;
            if(s[i] == fchar) ans=max(ans, gotg-i);
            }
        cout << ans << endl;
    }
}