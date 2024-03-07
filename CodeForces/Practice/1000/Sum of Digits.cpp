#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, ans, i, c=0;
    string s;
    cin >> s;
    while(s.length()>1){
        int sum =0;
        for(i=0; i<s.length(); i++){
            sum+= s[i]-'0';
        }
        s=to_string(sum);
        c++;
    }
    cout << c << endl;
    return 0;
}