#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, i, j;
    bool f;
    cin >> n >> m;
    vector<string> s(n);
    string ts;
    map<string, int> mp;
    for(i=0; i<n; i++) cin >> s[i];
    for(i=0; i<m; i++){
        cin >> ts;
        mp[ts]++;
    }
    for(auto a: s){
        if(mp[a]>0) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}