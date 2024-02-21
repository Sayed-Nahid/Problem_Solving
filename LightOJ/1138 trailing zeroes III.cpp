#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll findzero(ll x){
    ll zero=0;
    for(ll i=5; i<=x; i *=5) zero += (x/i);
    return zero;
}

int main(){
    int t, cno;
    ll q, l, h, m, ans, zero;
    cin >> t;
    for(cno=1; cno<=t; cno++){
        cin >> q;
        ans=-1, h=1e18, l=1;
        while(l<=h){
            m = (l+h)/2;
            zero = findzero(m);
            if(zero > q) h = m-1;
            else if(zero < q) l = m+1;
            else ans=m, h=m-1;
        }
        cout << "Case " << cno << ": ";
        if(ans == -1) cout << "impossible\n";
        else cout << ans << "\n";
    }
    return 0;
}