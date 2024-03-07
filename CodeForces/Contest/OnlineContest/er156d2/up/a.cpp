#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, n, x, y, z;
    cin >> t;
    while(t--){
        cin >> n;
        if(n<7){
            cout << "No\n";
            continue;
        }
        x=1; y=2; z=n-x-y;
        if(z%3==0){
            z -= 2;
            y += 2;
        }
        if(z>y) cout << "Yes\n" << x << " " << y << " " << z << endl;
        else cout << "No\n";
    }
    return 0;
}