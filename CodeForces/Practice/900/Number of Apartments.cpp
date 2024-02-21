#include<bits/stdc++.h>
#define sp(n) fixed << setprecision(n)
#define ll long long int
#define f(i, n) for(i; i<n; i++)
#define fr(n) for(i=n; i>=0; i--)
#define fill(arr, val) memset(arr, val, sizeof(arr))
using namespace std;
void cf(){
    int t, x, i, n;
    string s;
    cin >> t;
    while(t--){
        cin >> x;
        if(x==1 || x==2 || x==4) {cout << -1 << endl; continue;}
        else if(x%3==0) cout << x/3 << " " << 0 << " " << 0 << endl;
        else if(x%3==1) cout << (x-7)/3 << " " << 0 << " " << 1 << endl;
        else if(x%3==2) cout << (x-5)/3 << " " << 1 << " " << 0 << endl;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cf();
    return 0;
}
