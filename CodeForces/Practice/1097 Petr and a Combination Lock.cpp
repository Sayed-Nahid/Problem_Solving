#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, mask;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++) cin >> arr[i];
    for(mask=0; mask<(1<<n); mask++){
        int ans=0;
        for(i=0; i<n; i++){
            if(mask & (1<<i))  ans += arr[i];
            else ans -= arr[i];
        }
        if(ans%360 == 0){ 
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}