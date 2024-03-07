#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b;
    cin >> n >> a >> b;
    b = n - b;
    if(a == b) cout << a+1 << endl;
    else cout << b << endl;
    return 0;
}