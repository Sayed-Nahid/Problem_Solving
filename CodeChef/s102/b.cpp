#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    double x;
    cin >> t;
    while(t--){
        cin >> x;
        x *= 0.2;
        cout << (int)ceil(100.0/x) << endl;
    }
    return 0;
}