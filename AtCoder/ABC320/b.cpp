#include<bits/stdc++.h>
using namespace std;
bool fun(string s){
    string p = s;
    reverse(p.begin(), p.end());
    if (s == p) return true;
    else return false;
}
int subString(string s, int n)
{
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            if(fun(s.substr(i, len))) return len;

    return 0;
}
 

int main(){
    string s, temp;
    bool flag=false;
    int i, mask, len=0;
    cin >> s;
    len = subString(s, s.length());
    if(len) cout << len << endl;
    else cout << 1 << endl;
    return 0;
}