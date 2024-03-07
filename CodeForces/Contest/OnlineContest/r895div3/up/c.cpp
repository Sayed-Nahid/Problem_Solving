#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, l, r, i;
    bool gotit=false;
    cin >> t;
    while(t--){
        cin >> l >> r;
        gotit=false;
        for(i=2; i*i<=r; i++){
            if(r%i==0){
                cout << i << " " << r-i << endl;
                gotit=true;
                break;
            }
        }
        if(!gotit){
            if(l != r && r-3>0) cout << "2 " << r-3 << endl;
            else cout << -1 << endl;
        }
    }
    return 0;
}