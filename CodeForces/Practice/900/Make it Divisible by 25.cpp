#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, len, i, j, ans, val;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        ans=len = s.length();
        for(i=0; i<len; i++){
            for(j=i+1; j<len; j++){
                val=(s[i]-'0')*10 + (s[j]-'0');
                if(val%25==0){
                    ans=min(ans, (len-j-1)+(j-i-1));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}