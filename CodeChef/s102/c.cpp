#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i;
    double x;
    cin >> t;
    while(t--){
        cin >>n;
        int arr[n], sum=0;
        for(i=0; i<n; i++) cin >> arr[i];
        sort(arr, arr+n);
        for(i=1; i<n; i++) sum+=arr[i];
        cout << sum<< endl;
    }
    return 0;
}