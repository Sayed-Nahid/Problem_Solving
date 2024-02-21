#include<bits/stdc++.h>
#define sp(n) fixed << setprecision(n)
#define ll long long int
#define f(i, n) for(i; i<n; i++)
#define fr(n) for(i=n; i>=0; i--)
#define fill(arr, val) memset(arr, val, sizeof(arr))
using namespace std;
void cf(){
    int t, x, i, n, flag, czero, cone;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> s;
        (count(s.begin(), s.end(), '0')>=1)?cout << "YES\n": cout << "NO\n";
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cf();
    return 0;
}
