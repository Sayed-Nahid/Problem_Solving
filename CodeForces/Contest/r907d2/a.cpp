#include<bits/stdc++.h>
#define sp(n) fixed << setprecision(n)
#define ll long long int
#define f(i, n) for(i; i<n; i++)
#define fr(n) for(i=n; i>=0; i--)
#define fill(arr, val) memset(arr, val, sizeof(arr))
using namespace std;
void cf(){
    int t, x, i, n, y;
    bool f=false;
    string s;
    cin >> t;
    while(t--){
        f=false;
        cin >> n >> x;
        for(i=1; i<n; i++){
            cin >> y;
            if(x > y) if(((i-1)&i) !=0) f=true;
            x = y;
        }
        if(f) cout << "NO\n";
        else cout << "YES\n";
        
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cf();
    return 0;
}
