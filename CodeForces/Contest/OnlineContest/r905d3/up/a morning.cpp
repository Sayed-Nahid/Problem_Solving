#include<bits/stdc++.h>
#define sp(n) fixed << setprecision(n)
#define ll long long int
#define f(i, n) for(i; i<n; i++)
#define fr(n) for(i=n; i>=0; i--)
#define fill(arr, val) memset(arr, val, sizeof(arr))
using namespace std;
void cf(){
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        ll ans = 0;
        int p = 1;
        for (int i = 0; i < s.size(); i ++)
        {
            int a = s[i] - '0';
            if(!a) a = 10;
            if(a == p) ans ++;
            else 
            {
                ans += abs(a - p) + 1;
                p = a;
            }
        }
        cout << ans << endl;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cf();
    return 0;
}
