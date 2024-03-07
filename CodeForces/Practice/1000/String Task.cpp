#include<bits/stdc++.h>
using namespace std;
int main(){
    int len, i;
    string s, ans;
    cin >> s;
    len =s.length();
    for(i=0; i<len; i++){
        if(s[i]=='A' || s[i]=='O' || s[i]=='Y' || s[i]=='E' || s[i]=='U' || s[i]=='I' || s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i') continue;
        else{
            if(s[i]>='A' && s[i]<='Z'){
                ans.push_back('.');
                ans.push_back(tolower(s[i]));
            }
            else{
                ans.push_back('.');
                ans.push_back(s[i]);
            }
        }

    }
    cout << ans << endl;
    return 0;
}