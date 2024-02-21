#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, k, i, j;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cin >> ws;
        cin >> s;
        int count=0;
        for(i=0; i<n; i++){
            if(s[i]=='B'){
                count++;
                i+=(k-1);
            }
        }
        cout << count << endl;
    }
    return 0;
}