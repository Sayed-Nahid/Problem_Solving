#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, i, j;
    cin >> n >> m;
    long long arr[n], pre[n+1], x, r, d;
    pre[0]=0;
    for(i=0; i<n; i++){
         cin >> arr[i];
         pre[i+1]=pre[i]+arr[i];
    }
    while(m--){
        cin >> x;
        d = lower_bound(pre, pre+n, x)-pre;
        cout << d << " " << x-pre[d-1] << endl;
    }
    return 0;
}