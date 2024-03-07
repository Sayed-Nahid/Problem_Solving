#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a, b, c, d;
    cin >> a >> b;
    c = string(a.size(), '0') + b;
    d = string(b.size(), '0') + a;
    if(d==c) cout << "=\n";
    else if(d>c) cout << ">\n";
    else if(d<c) cout << "<\n";
    return 0;
}