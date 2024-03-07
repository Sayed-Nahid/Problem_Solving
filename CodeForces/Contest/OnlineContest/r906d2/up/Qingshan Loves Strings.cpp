#include<bits/stdc++.h>
#define sp(n) fixed << setprecision(n)
#define ll long long int
#define f(i, n) for(i; i<n; i++)
#define fr(n) for(i=n; i>=0; i--)
#define fill(arr, val) memset(arr, val, sizeof(arr))
using namespace std;
void cf(){
    int t, x, i, n, m;
    string s, ts;
    bool f, y;
    cin >> t;
    while(t--){
        cin >> n >> m;
        cin >> s >> ts;
        f=y=true;
        for(i=0; i<m-1; i++) if(ts[i]==ts[i+1]) f=false;
        if(ts[0] != ts[m-1]) f=false;
        char temp=ts[0];
        for(i=0; i<n-1; i++){
            if(s[i]==s[i+1]){
                if(!f || s[i]==temp){
                    y=false;
                    cout << "No\n";
                    break;
                }
            }
        }
        if(y) cout << "Yes" << endl;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cf();
    return 0;
}
