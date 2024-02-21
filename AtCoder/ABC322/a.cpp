#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n,ans=-1, len;
    bool flag=false;
    cin >> len;
    cin >> s;
    for(n=0; n<len; n++) if(s[n]=='A'&&s[n+1]=='B'&&s[n+2]=='C'){
        ans=n+1;
         flag=true;
         break;
    }
    if(flag) cout <<ans<< endl;
    else cout <<ans<< endl;
    return 0;
}