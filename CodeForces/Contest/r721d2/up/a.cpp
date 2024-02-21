#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, ans, n, bcount, i;
    cin >> t;
    while(t--){
        cin >> n;
        bcount=0;
        for(i=0; i<30; i++) if((n>>i) == 1) bcount=i;
        cout << (1<<bcount)-1 << endl;
    }
    return 0;
}