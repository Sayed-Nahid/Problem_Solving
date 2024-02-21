#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, h, i;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> h;
        s = "";
        for(i=0; i<n; i++){
            if(i < n-h) s+="0";
            else s+="1";
        }
        do{
            cout << s << endl;
        }while(next_permutation(s.begin(), s.end()));
        if(t) cout << endl;
    }
    return 0;
}