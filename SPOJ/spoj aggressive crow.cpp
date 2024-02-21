#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, c, i, low, high, mid, ans, cowcnt, nxtcow;
    cin >> t;
    while(t--){
        cin >> n >> c;
        int arr[n];
        for(i=0; i<n; i++) cin >> arr[i];
        sort(arr, arr+n);
        low=0, high=arr[n-1], ans=0;
        while(low<=high){
            mid=(low+high+1)/2;
            cowcnt=1, nxtcow=0;
            for(i=1; i<n && cowcnt<c; i++){
                if(arr[i]-arr[nxtcow] >= mid) nxtcow=i, cowcnt++;
            }
            if(cowcnt>=c){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        cout << ans << endl;
    }
    return 0;
}