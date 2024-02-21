#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, i=0;
    cin >> n >> k;
    vector<int> v(n+1);
    v[0]=1;
    for(i=1; i<=n; i++) cin >> v[i]; 
    sort(v.begin(), v.end());
    cout << (v[k]!=v[k+1]?v[k]:-1) << endl;
    return 0;
}