#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, k, n;
    string s;
    bool f;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cin >> ws;
        cin >> s;
        if(2*k>=n) cout << "No\n";
        else{
            f=true;
            for(int i=0; i<k; i++){
                if(s[i] != s[n-1-i]){
                    f=false;
                    break;
                }
            }
            if(f) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}