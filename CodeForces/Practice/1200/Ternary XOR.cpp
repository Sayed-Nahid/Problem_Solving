#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> s;
        string s1(n, '0'), s2(n, '0');
        for(i=0; i<n; i++){
            if(s[i]=='0') s1[i]='0', s2[i]='0';
            else if(s[i]=='2') s1[i]='1', s2[i]='1';
            else if(s[i]=='1') {
                s1[i]='1',s2[i]='0';
                for(int j=i+1; j<n; j++) s2[j] = s[j];
                break;
            }
        }
        cout << s1 << endl << s2 << endl;
    }
    return 0;
}