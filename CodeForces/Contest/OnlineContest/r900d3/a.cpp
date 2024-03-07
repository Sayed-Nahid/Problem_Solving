#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, x, n, k;
    bool flag;
    cin >> t;
    while(t--){
        cin >> n >> k;
        flag=false;
        for(int i=0; i<n; i++){
            cin >> x;
            if(x==k) flag=true;
        }
        if(flag) cout << "YES"<< endl;
        else cout << "NO\n";
    }
    return 0;
}