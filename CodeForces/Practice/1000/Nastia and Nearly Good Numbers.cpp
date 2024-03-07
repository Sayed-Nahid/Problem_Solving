#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long int a, b, x;
    cin >> t;
    while(t--){
        cin >> a >> b;
        x = a*b;
        if(x==a) cout << "NO\n";
        else  cout << "YES\n" << a << " " << x << " " << x+a << "\n";
    }
    return 0;
}