#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i;
    long long int total, r, l, mid, x, ans;
    cin >> t;
    while(t--){
        cin >> n >> x;
        long long int arr[n];
        for(i=0; i<n; i++) cin >> arr[i];
        l=0; r=2e9;
        while(r>=l){
            mid=(l+r)/2;
            total=0;
            for(i=0; i<n; i++) if(arr[i]<=mid) total+=mid-arr[i];
            if(total<=x){
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        cout << ans << endl;
    }
    return 0;
}