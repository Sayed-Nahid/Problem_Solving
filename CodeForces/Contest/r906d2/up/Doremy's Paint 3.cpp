#include<bits/stdc++.h>
#define sp(n) fixed << setprecision(n)
#define ll long long int
#define f(i, n) for(i; i<n; i++)
#define fr(n) for(i=n; i>=0; i--)
#define fill(arr, val) memset(arr, val, sizeof(arr))
using namespace std;
bool checksum(vector<int> a, int n){
    int sum=a[0]+a[1];
    for(int i=1; i<n-1; i++) if(a[i]+a[i+1] != sum) return false;
    return true;
}

void cf(){
    int t, x, i, n, round, l, h;
    cin >> t;
    while(t--){
        cin >> n;
        round=2;
        vector<int> a(n), b(n);
        for(i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        l=0, h=n-1;
        for(i=0; i<n; i++){
            if(i&1) b[i]=a[h--];
            else b[i]=a[l++];
        }
        if(checksum(b, n)) {cout << "Yes\n"; continue;}
        l=0, h=n-1;
        for(i=0; i<n; i++){
            if(i&1) b[i]=a[l++];
            else b[i]=a[h--];
        }
        if(checksum(b, n)) cout << "Yes\n";
        else cout << "No\n";
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cf();
    return 0;
}
