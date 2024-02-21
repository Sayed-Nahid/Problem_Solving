#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, mnc, mxc, mn=INT_MAX, mx=INT_MIN;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++){
        cin >> arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    } 
    mnc=mxc=0;
    for(i=0; i<n; i++){
        if(arr[i]==mn) mnc++;
        if(arr[i]==mx) mxc++;
    } 
    if(mn == mx) cout << 0 << endl;
    else cout << n-mnc-mxc << endl;
    return 0;
}