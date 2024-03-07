#include<bits/stdc++.h>
using namespace std;
int main(){
    int len, n, ans;
    cin >> n;
    if(n == 0) ans=1;
    else{
        n = n%4;
        if(n == 0) ans=6;
        else if(n == 1) ans=8;
        else if(n == 2) ans=4;
        else if(n == 3) ans=2;
    }
    cout << ans << endl;
    return 0;
}