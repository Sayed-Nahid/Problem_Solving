#include<bits/stdc++.h>
using namespace std;
int main(){
    int s, n, i, x, y;
    bool f=true;
    cin >> s >> n;
    vector<pair<int, int> > v(n);
    for(i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    for(i=0; i<n; i++){
        if(v[i].first<s) s += v[i].second;
        else f=false;
    }
    if(f) cout << "YES\n";
    else cout << "NO\n";
}