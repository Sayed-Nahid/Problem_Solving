#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i;
    int s[100], e[100];
    bool win;
    cin >> t;
    while(t--){
        cin >> n;
        win=true;
        for(i=0; i<n; i++) cin >> s[i] >> e[i];
        for(i=1; i<n; i++){
            if(s[i]>=s[0] && e[i]>=e[0]){
                win=false;
                break;
            }
        }
        if(!win) cout << -1 << endl;
        else cout << s[0] << "\n";
    }
    return 0;
}