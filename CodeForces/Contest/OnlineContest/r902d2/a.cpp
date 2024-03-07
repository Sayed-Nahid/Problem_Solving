#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, n, i, x, sum;
    cin >> t;
    while(t--){
        cin >> n;
        sum=0;
        for(i=0; i<(n-1); i++){
            cin >> x;
            sum+=x;
        }
        if(sum <= 0) cout << abs(sum) << endl;
        else cout << -1*sum << endl;
    }
    return 0;
}