#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i, s, e, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<pair<int, int>> a(n);
        vector<int> b(n), ans(n);
        for(i=0; i<n; i++){
            cin >> a[i].first;
            a[i].second=i;
        }
        for(auto &i: b) cin >> i;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(i=0; i<n; i++) ans[a[i].second]=b[i];
        for(i=0; i<n; i++){
            if(i==0) cout << ans[i];
            else cout << " " << ans[i];
        }
        cout << endl;
    }
    return 0;
}