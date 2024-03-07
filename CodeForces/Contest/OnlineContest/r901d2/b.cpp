#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, m, k, i;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        int arr[n], arr1[m];
        long long int sum=0;
        for(i=0; i<n; i++) cin >> arr[i];
        for(i=0; i<m; i++) cin >> arr1[i];
        if(k&1) k=1;
		else k=2;
        for(i=1; i<=k; i++){
            if(i&1){
                sort(arr, arr+n);
                sort(arr1, arr1+m, greater<int>());
                if(arr[0]<arr1[0]) swap(arr[0],arr1[0]);
            }
            else{
                sort(arr1, arr1+m);
                sort(arr, arr+n, greater<int>());
                if(arr1[0]<arr[0]) swap(arr[0],arr1[0]);
            } 
        }
        for(i=0; i<n; i++) sum+=arr[i];
        cout << sum << endl;
    }
    return 0;
}