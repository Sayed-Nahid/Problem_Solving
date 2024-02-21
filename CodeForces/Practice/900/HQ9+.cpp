#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    string s;
    cin >> s;
    int len=s.length(), i;
    bool flag=false;
    for(i=0; i<len && !flag; i++) if(s[i]=='H' || s[i]=='Q' || s[i]=='9') flag=true;
    if(flag) cout << "YES\n";
    else cout << "NO" << endl;
    return 0;
}