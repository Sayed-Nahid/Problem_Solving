#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t, n, k, i, x, j, sum;
    cin >> t;
    while(t--){
        cin >> n >> k;
        sum=0;
        vector<ll> v(n*k);
        for(i=0; i<n*k; i++){
            cin >> v[i];
        }
        x = n/2;
        for(i=(n*k)-1-x, j=0; i>=0 && j<k; j++, i -= x+1) sum+=v[i];
        cout << sum << endl;
    }
    return 0;
}