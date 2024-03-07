#include<bits/stdc++.h>
using namespace std;
int makval(int x){
    string s=to_string(x), temps;
    for(int i=0; i<s.length(); i++) if(s[i]!='0') temps.push_back(s[i]);
    int ans = stoi(temps);
    return ans;
}
int main(){
    int x, y, fsum;
    cin >> x >> y;
    fsum = makval(x+y);
    x = makval(x);
    y = makval(y);
    if(fsum == x+y) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}