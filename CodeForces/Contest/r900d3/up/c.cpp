#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long int x, n, mn, mx, k;
    cin >> t;
    while(t--){
        cin >> n >> k >> x;
        mn=((k*(k+1))/2);
        mx=(k*(2*n-k+1))/2;
        if(x>=mn && x<=mx) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}