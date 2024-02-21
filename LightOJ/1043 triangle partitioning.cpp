#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, cno;
    double ab, ac, bc, r;
    cin >> t;
    for(cno=1; cno<=t; cno++){
        cin >> ab >> ac >> bc >> r;
        cout << "Case " << cno << ": " << fixed << setprecision(6) << ab*sqrt(r/(r+1)) << endl;
    }
    return 0;
}