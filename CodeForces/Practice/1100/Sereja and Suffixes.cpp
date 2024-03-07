#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, i, x;
    cin >> n >> m;
    int arr[n+1], dp[n+1];
    set<int> s;
    for(i=1; i<=n; i++) cin >> arr[i];
    for(i=n; i>0; i--){
        s.insert(arr[i]);
        dp[i] = s.size();
    }
    while(m--){
        cin >> x;
        cout << dp[x] << endl;
    }
    return 0;
}