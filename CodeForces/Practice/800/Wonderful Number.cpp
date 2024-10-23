#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(int x){
    string s, s1;
    int mod;
    while(x){
        mod = x%2;
        x/=2;
        if(mod == 0) s += "0";
        else s+= "1";
    }
    s1 = s;
    reverse(s1.begin(), s1.end());
    return s1 == s;
}

bool findodd(int x){
    if(x%2==0) return false;
    return ispalindrome(x);
}
int main(){
    int x;
    bool flag;
    cin >> x;
    flag = findodd(x);
    if(flag) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}