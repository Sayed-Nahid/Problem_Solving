#include<bits/stdc++.h>
using namespace std;
int t, r, g, b, w;
int oddcount(){
    int c=0;
    if(r&1) c++;
    if(g&1) c++;
    if(b&1) c++;
    if(w&1) c++;
    return c;
}
int main(){
    
    cin >> t;
    while(t--){
        cin >> r >> g >> b >> w;
        if(oddcount()<=1) cout << "Yes\n";
        else{
            if(r!=0 && g!=0 && b!=0) r--, g--, b--, w++;
            if(oddcount()<=1) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}