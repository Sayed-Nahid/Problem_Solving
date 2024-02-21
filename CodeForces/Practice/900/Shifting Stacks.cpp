#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t, i;
    ll n, need, sum, x;
    bool f;
    cin >> t;
    while(t--){
        cin >> n;
        ll arr[n];
        for(i=0; i<n; i++) cin >> arr[i];
        sum=0;
        f=true;
        for(i=0; i<n && f; i++){
            if(arr[i]>=i) sum+=(arr[i]-i);
            else if(arr[i]+sum>=i) sum -=(i-arr[i]);
            else f=false;
        } 
        if(f) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}