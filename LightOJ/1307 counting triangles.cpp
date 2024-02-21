#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, cno, n, i, j, indx, sum;
    long long ans=0;
    cin >> t;
    for(cno=1; cno<=t; cno++){
        cin >> n;
        int arr[n];
        for(i=0; i<n; i++) cin >> arr[i];
        sort(arr, arr+n);
        ans=0;
        for(i=0; i<n; i++)
            for(j=i+1; j<n; j++){
                sum = arr[i]+arr[j];
                indx=upper_bound(arr, arr+n, sum-1)-arr-1;
                ans+=indx-j;
            }
        cout << "Case " << cno << ": " << ans << endl;
    }
    return 0;
}