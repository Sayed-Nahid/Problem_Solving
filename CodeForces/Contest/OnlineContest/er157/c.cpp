#include<bits/stdc++.h>
#define sp(n) fixed << setprecision(n)
#define ll long long int
#define f(i, n) for(i; i<n; i++)
#define fr(n) for(i=n; i>=0; i--)
#define fill(arr, val) memset(arr, val, sizeof(arr))
using namespace std;

bool check(string s, int len){
    int n=len/2;
    for(int i=0; i<n; i++){
        if(s[i] != s[n+i]) return false;
    }
    return true;
}


void cf(){
    int t, x, i, n;
    cin >> t;
    while(t--){
        cin >> x;
        vector<string> v(n);
        int l=0;
        for(i=0; i<n;l  i++){
            cin >> v[i];
            l=max((int)v[i].size(), l);
            map<int, int> m[l+1];
            for(i=0; i<n; i++){
                int s=0;
                for(int j=0; j<v[i].size(); j++) s+=v[i][j]-48;
                m[v[i]].size()][s]++;          
                 }
        }


    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cf();
    return 0;
}
