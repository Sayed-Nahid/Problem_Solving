#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, a, b, c;
    double d;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        d = abs(a-b);
        cout << ceil(d/(2*c)) << endl;
    }
    return 0;
}