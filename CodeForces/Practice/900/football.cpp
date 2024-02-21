#include<bits/stdc++.h>
using namespace std;
int main(){
    int len, i, one=0, zero=0;
    string s;
    bool flag=false;
    cin >> s;
    len=s.length();
    for(i=0; i<len && !flag; i++){
        if(s[i]=='1'){
            one++, zero=0;
            if(one == 7) flag=true;
        } 
        else{
            zero++, one=0;
            if(zero==7) flag=true;
        } 
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}