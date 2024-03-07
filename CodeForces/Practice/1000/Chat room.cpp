#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, ts="hello";
    cin >> s;
    int n, i, indx=0;
    bool f=false;
    n = s.length();
    for(i=0; i<n; i++){
        if(s[i]==ts[indx]) indx++;
    }
    if(indx == 5) cout << "YES\n";
    else cout << "NO\n";
}