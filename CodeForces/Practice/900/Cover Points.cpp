#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, x, y, ans=0;
    cin >> t;
    while(t--){
        cin >> x >> y;
        ans = max(ans, x+y);
    }
    cout << ans << endl;
    return 0;
}