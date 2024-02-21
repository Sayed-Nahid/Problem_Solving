#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    string s="989";
    cin >> t;
    while(t--){
        cin >> n;
        if(n<=3) cout << s.substr(0, n);
        else{
            cout << s;
            for(int i=3; i<n; i++) cout << (i-3)%10;      
        }
        
        cout << endl;
    }
    return 0;
}