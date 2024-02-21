#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, mn=INT_MAX, mx=INT_MIN, cmn, cmx;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++){
        cin >> arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    cmn=cmx=0;
    for(i=0; i<n; i++){
        if(arr[i] == mn) cmn++;
        if(arr[i] == mx) cmx++;
    }
    if(mn == mx) cout << 0 << "\n";
    else cout << n-cmn-cmx << "\n";
}