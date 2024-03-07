#include<bits/stdc++.h>
using namespace std;
int main(){
    int len, i, j, l, r, n, c;
    string s;
    cin >> s;
    len=s.length();
    int pre[len]={0};
    for(i=1; i<len; i++){
        if(s[i]==s[i-1]) pre[i]=pre[i-1]+1;
        else pre[i]=pre[i-1];
    }
    cin >> n;
    for(i=0; i<n; i++){
        cin >> l >> r;
        c = pre[r-1]-pre[l-1];
        cout << c << endl;
    }
    return 0;
}