#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string x;
    bool flag=true;
    cin >> x;
    for(int i=1; i<16; i+=2){
        if(x[i] == '0') continue;
        else flag = false;
    }
    if(flag) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}