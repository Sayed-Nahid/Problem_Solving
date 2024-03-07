#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i, mx;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        for(i=0; i<n; i++) cin >> arr[i];
        sort(arr, arr+n);
        mx=arr[0];
        for(i=1; i<n; i++) mx = max(mx, arr[i]-arr[i-1]);
        cout << mx << endl;
    }
    return 0;
}