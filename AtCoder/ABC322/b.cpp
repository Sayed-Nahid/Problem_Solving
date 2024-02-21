#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, i;
    string s1, s2;
    bool f1, f2;
    cin >> n >> m;
    cin >> ws;
    cin >> s1 >> s2;
    for(i=0; i<n; i++){
        if(s1[i]==s2[i]){
            f1=true;
        }
        else {
            f1=false;
            break;}
    }
    for(i=0; i<n; i++){
        if(s1[i]==s2[m-n+i]){
            f2=true;
        }
        else{ f2=false; break;}
    }
    if(!f1 && !f2) cout << 3<<  endl;
    else if(f1 && !f2) cout <<1 <<  endl;
    else if(f2 && !f1) cout <<2 <<  endl;
    else cout <<0 <<  endl;
    return 0;
}