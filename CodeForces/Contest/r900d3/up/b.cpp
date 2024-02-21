#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i, x;
    cin >> t;
    while(t--){
        cin >> n;
        x=1;
        cout << 1;
        for(i=1; i<n; i++){
            x+=2;
            cout << " " << x;
        }
        cout << endl;
    }
    return 0;
}