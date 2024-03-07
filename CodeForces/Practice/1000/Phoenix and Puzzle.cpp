#include<bits/stdc++.h>
using namespace std;
bool check(int x){
    int y=sqrt(x);
    return y*y==x;
}
int main(){
    int n, t;
    cin >> t;
    while(t--){
        cin >> n;
        if(n%2==0 && check(n/2)) cout << "YES\n";
        else if(n%4==0 && check(n/4)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}