#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, n, m;
    string s, s1;
    cin >> n >> m;
    map<string, string> mp;
    vector<string> v;
    for(i=0; i<m; i++){
        cin >> s >> s1;
        mp[s]=s1;
    }
    for(i=0; i<n; i++){
        cin >> s;
        s1 = mp[s];
        if(s.length()>s1.length()) v.push_back(s1);
        else v.push_back(s);
    }
    for(i=0; i<n; i++){
        if(i==0) cout << v[0];
        else cout << " " << v[i];
    }
    cout << "\n";
    return 0;
}