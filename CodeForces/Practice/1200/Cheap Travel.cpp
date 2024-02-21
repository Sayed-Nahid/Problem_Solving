#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, a, b, ans=0, rest;
    cin >> n >> m >> a >> b;
    if(ceil(b/m)>=a) ans = n*a;
    else{
        rest = n/m;
        n%=m;
        ans = rest*b;
        ans += min(n*a, b);
    }
    cout << ans << endl;
    return 0;
}