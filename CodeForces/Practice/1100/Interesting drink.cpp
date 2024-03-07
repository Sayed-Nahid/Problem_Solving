#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, q, i, j, x, ans;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    cin >> q;
    for(i=0; i<q; i++){
        cin >> x;
        ans = upper_bound(arr, arr+n, x)-arr;
    }
    return 0;
}