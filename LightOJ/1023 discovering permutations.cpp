#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, cno, n, p, i;
    string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ", subs, checks;
    cin >> t;
    for(cno=1; cno<=t; cno++){
        cin >> n >> p;
        cout << "Case " << cno << ":\n";
        subs=s.substr(0, n);
        checks=subs;
        for(i=0; i<p; i++){
            cout << subs << endl;
            next_permutation(subs.begin(), subs.end());
            if(subs==checks) break;
        }
    }
    return 0;
}
