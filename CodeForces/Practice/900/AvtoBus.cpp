#include<bits/stdc++.h>
using namespace std;
int main(){
    int  t;
    long long int x, mn, mx;
    cin >> t;
    while(t--){
        cin >> x;
        if(x<4 || x&1) cout << -1 << endl;
        else{
            mn=x/6;
            if(x%6) mn++;
            mx=x/4;
            cout << mn << " " << mx << "\n";
        } 
    }
    return 0;
}