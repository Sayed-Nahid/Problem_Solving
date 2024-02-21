#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        if(s[0] == 'a'){
            if(s[1]=='b' || s[1]=='c') cout << "YES\n";
            else cout << "NO\n";
        }
        else if(s[0]=='b'){
            if(s[1]=='a' && s[2]=='c') cout << "YES\n";
            else cout << "NO\n";
        }
        else if(s[0]=='c'){
            if(s[1]=='b' && s[2]=='a') cout << "YES\n";
            else cout << "NO\n";
        }
        
    }
    return 0;
}