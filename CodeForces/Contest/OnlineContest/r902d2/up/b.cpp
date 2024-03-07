#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, p, i, mn;
    cin >> t;
    while(t--){
        cin >> n >> p;
        vector<vector<int>> a(n, vector<int>(2));
        for(i=0; i<n; i++) cin >> a[i][1];
        for(i=0; i<n; i++) cin >> a[i][0];
        map<int, long long> mp;
        mp[p]=n+5;
        sort(a.begin(), a.end());
        long long ans=0;
        for(i=0; i<n; i++){
            mn=mp.begin()->first;
            ans+=mn;
            mp[mn]--;
            mp[a[i][0]] += a[i][1];
            if(mp[mn]==0) mp.erase(mn);
        }
        cout << ans << endl;
    }
    return 0;
}