#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, i, q, x, f=0, s=0;
    map<int, int> mp;
    cin >> n;
    for(i=1; i<=n; i++) {cin >> x; mp[x]=i;}
    cin >> q;
    for(i=0; i<q; i++){
        cin >> x;
        f += mp[x];
        s += n-mp[x]+1;
    }
    cout << f << " " << s << endl;
    return 0;
}