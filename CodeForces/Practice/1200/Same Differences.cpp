#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t, n, x;
    cin >> t;
    while(t--){
        cin >> n;
        map<ll, ll> mp;
        for(int i=0; i<n; i++){
            cin >> x;
            mp[x-i]++;
        }
        long long int ans=0;
        for(auto i: mp){
            ans += (i.second)*(i.second-1)/2;
        }
        cout << ans << "\n";
    }
    return 0;
}