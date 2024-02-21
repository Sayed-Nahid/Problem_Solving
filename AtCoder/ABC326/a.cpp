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
    int t, n, i, x, y;
    cin >> x  >>  y;
    n = x-y;
    if(abs(n) <=2 && n!=0) cout << "Yes\n";
    else if(n<=3 && n>0) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
