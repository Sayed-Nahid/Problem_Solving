#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, q, i, buy, free;
    cin >> n >> q;
    vector<long long int> arr(n), pre(n+1);
    for(i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end(), greater<int>());
    for(i=1; i<=n; i++) pre[i]=pre[i-1]+arr[i-1];
    for(i=0; i<q; i++){
        cin >> buy >> free;
        cout << pre[buy]-pre[buy-free] << endl;
    }
    return 0;
}