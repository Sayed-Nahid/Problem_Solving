#include<iostream>
using namespace std;
int main(){
    string x;
    bool flag=true;
    cin >> x;
    int len=x.length();
    for(int i=0; i<len-1; i++) if(x[i]<=x[i+1]) flag=false;
    if(flag) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}