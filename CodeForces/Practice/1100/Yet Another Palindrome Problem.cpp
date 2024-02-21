#include<bits/stdc++.h>
#define sp(n) fixed << setprecision(n)
#define ll long long int
#define f(i, n) for(i; i<n; i++)
#define fr(n) for(i=n; i>=0; i--)
#define fill(arr, val) memset(arr, val, sizeof(arr))
using namespace std;
void cf(){
    int t, x, i, n, j;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        bool f=false;
        for(i=0; i<n; i++) cin >> arr[i];
        for(i=0; i<n-2; i++) for(j=i+2; j<n; j++) if(arr[i]==arr[j]) f=true;
        if(f) cout << "YES\n";
        else cout << "NO\n";
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cf();
    return 0;
}
