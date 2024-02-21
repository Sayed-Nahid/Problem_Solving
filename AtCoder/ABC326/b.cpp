#include<bits/stdc++.h>
#define sp(n) fixed << setprecision(n)
#define ll long long int
#define fill(arr, val) memset(arr, val, sizeof(arr))
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    int t, n, i, x, y, z;
    bool flag=true;
    cin >> n;
    
    while(flag){
        t=n;
        z = t%10;
        t/=10;
        y = t%10;
        t/=10;
        x = t%10;
        if(x*y==z) flag=false;
        else n++;
    }
    cout << n << "\n";
    return 0;
}
