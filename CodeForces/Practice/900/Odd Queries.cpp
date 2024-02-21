#include<bits/stdc++.h>
#define sp(n) fixed << setprecision(n)
#define ll long long int
#define f(i, n) for(i; i<n; i++)
#define fr(n) for(i=n; i>=0; i--)
#define fill(arr, val) memset(arr, val, sizeof(arr))
using namespace std;
ll arr[200001], pre[200001];
void cf(){
    int t, x, i, n, q, l, r, k, j;
    ll ans, sum;
    cin >> t;
    while(t--){
        cin >> n >> q;
        arr[0]=pre[0]=0;
        for(i=1; i<=n; i++){
            cin >> arr[i];
            pre[i]=pre[i-1];
            pre[i]+= arr[i];
        }
        for(i=0; i<q; i++){
            cin >> l >> r >> k;
            ans=pre[n]-(pre[r]-pre[l-1])+(r-l+1)*k;
            if(ans&1) cout << "Yes\n";
            else cout << "No\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cf();
    return 0;
}
