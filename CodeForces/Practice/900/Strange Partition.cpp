#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, x, n, i;
    cin >> t;
    while(t--){
        cin >> n >> x;
        int arr[n];
        long long int sum,mx,mn;
        sum=mx=mn=0;
        for(i=0; i<n; i++){
            cin >> arr[i]; 
            mx+=arr[i]/x;
            if(arr[i]%x) mx++;
            sum+=arr[i];
        }
        mn = sum/x;
        if(sum%x) mn++;
        cout << mn << " " << mx << "\n";
    }
    return 0;
}