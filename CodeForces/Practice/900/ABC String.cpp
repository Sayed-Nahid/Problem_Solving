#include<bits/stdc++.h>
using namespace std;
string s, st;
bool check(int len){
    int sum=0;
    for(int i=0; i<len; i++){
        if(st[i]=='0') sum++;
        else sum--;
        if(sum<0) return false;
    }
    return sum==0;
}

int main(){
    int t, i, j, len;
    cin >> t;
    cin >> ws;
    while(t--){
        cin >> s;
        bool f=true;
        len=s.length();
        for(i=0; i<8; i++){
            st=s;
            for(j=0; j<len; j++){
                if(st[j]=='A') st[j]= (i&1)? '0':'1';
                else if(st[j]=='B') st[j]= (i&2)? '0':'1';
                else st[j]=(i&4)? '0':'1';
            }
            if(check(len)){
                f=false;
                cout << "Yes\n";
                break;
            }
        }
        if(f) cout << "No\n";
    }
    return 0;
}