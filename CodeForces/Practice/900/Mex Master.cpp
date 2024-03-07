#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n], z=0, nz=0, ans=0;
        for(i=0; i<n; i++){
             cin >> arr[i];
             if(arr[i]==0) z++;
             else nz++;
        }
        if(z-1<=nz) ans=0;
        else{
            int mx = *max_element(arr, arr+n);
            if(mx == 1) ans=2;
            else ans = 1;
        }
        cout << ans << endl;
    }
    return 0;
}