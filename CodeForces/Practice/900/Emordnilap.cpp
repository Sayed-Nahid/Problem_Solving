#include<bits/stdc++.h>
#define ll long long int
int mod=1000000007;
using namespace std;
int main(){
    int t;
    ll n;
    cin >> t;
    while(t--){
        cin >> n;
        ll ans = n*(n-1);
        ans = ans%mod;
        for(ll i=1; i<=n; i++){
            ans *= i;
            ans %=mod;
        }
        cout << ans << endl;
    }
    return 0;
}