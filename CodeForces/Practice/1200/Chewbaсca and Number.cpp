#include<bits/stdc++.h>
#define sp(n) fixed << setprecision(n)
#define ll long long int
#define f(i, n) for(i; i<n; i++)
#define fr(n) for(i=n; i>=0; i--)
#define fill(arr, val) memset(arr, val, sizeof(arr))
using namespace std;
void cf(){
    int t, x, n;
    int len, i;
    string s;
    char ch;
    cin >> s;
    len = s.length();
    for(i=0; i<len; i++){
        x=s[i]-48;
        if(i==0 && x == 9) cout << 9;
        else if(x>(9-x)) cout << 9-x;
        else cout << x ;
    }
    cout << "\n";
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cf();
    return 0;
}
