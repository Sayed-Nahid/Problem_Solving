#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, i;
    cin >> n >> m;
    vector<int> v(n);
    for(i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int mx=-1, take=0;
    for(i=0; i<n; i++){
        while(take<n && v[take] < v[i]+m) take++;
        mx = max(mx, take-i);
    }
    cout << mx << endl;
    return 0;
}