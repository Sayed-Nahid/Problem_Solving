#include<bits/stdc++.h>
#define sp(n) fixed << setprecision(n)
#define ll long long int
#define f(i, n) for(i; i<n; i++)
#define fr(n) for(i=n; i>=0; i--)
#define fill(arr, val) memset(arr, val, sizeof(arr))
using namespace std;
void cf(){
    int t, x, i, n,len, j;
    string s1, s2;
    cin >> n;
    cin >> ws;
    cin >> s1 >> s2;
    if(s1 == s2) cout << n << endl;
    else{
        len=n;
        for(i=0, j=n-1; i<n; i++){
            if(s1[j]==s2[i]) len--;
            else break;
        }
        cout << n+len<< endl;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cf();
    return 0;
}
