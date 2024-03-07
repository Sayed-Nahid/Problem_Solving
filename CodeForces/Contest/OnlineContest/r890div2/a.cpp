#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, i, n, ans;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        for(i=0; i<n; i++) cin >> arr[i];
        ans=0;
        for(i=0; i<n-1; i++) if(arr[i] > arr[i+1]) ans = max(ans, arr[i]);
        cout << ans << endl;
    }
    return 0;
}