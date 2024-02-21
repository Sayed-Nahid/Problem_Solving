#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, l, r, x, i, c, mask, mx, mi, dif, ans=0, sum;
    cin >> n >> l >> r >> x;
    int arr[n];
    for(i=0; i<n; i++) cin >> arr[i];
    for(mask=3; mask < (1<<n); mask++){
        sum=dif=c=mx=0;
        mi=10000000;
        for(i=0; i<n; i++){
            if(mask & (1<<i)){
                c++;
                sum+=arr[i];
                if(mx<arr[i]) mx=arr[i];
                if(mi>arr[i]) mi=arr[i];
            }
        }
        dif=mx-mi;
        if(c>=2 && sum<=r && sum>=l && dif>=x) ans++;
    }
    cout << ans << endl;
    return 0;
}