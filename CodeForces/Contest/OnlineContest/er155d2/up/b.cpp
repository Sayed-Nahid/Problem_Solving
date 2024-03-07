#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, n;
    ll mna, mnb, sa, sb, ans;
    cin >> t;
    while(t--){
        cin >> n;
        vector<ll> a(n), b(n);
        for(auto &x: a) cin >> x;
        for(auto &x: b) cin >> x;
        mna = *min_element(a.begin(), a.end());
        sa = accumulate(a.begin(), a.end(), 0LL);
        mnb = *min_element(b.begin(), b.end());
        sb = accumulate(b.begin(), b.end(), 0LL);
        ans = min(sb+(mna*n), sa+(mnb*n));
        cout << ans << endl;
    }
    return 0;
}