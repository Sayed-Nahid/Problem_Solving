#include<bits/stdc++.h>
#define sp(n) fixed << setprecision(n)
#define ll long long int
#define f(i, n) for(i; i<n; i++)
#define fr(n) for(i=n; i>=0; i--)
#define fill(arr, val) memset(arr, val, sizeof(arr))
using namespace std;
void cf(){
    int tno, x, i, n, q;
    string s;
    cin >> tno;
    while(tno--){
        cin >> n >> q;
        vector<int> v(n), a;
        for(i=0; i<n; i++) cin >> v[i];
        for(i=0; i<q; i++){
            int t;
            cin >> t;
            if(a.empty() || a.back()>t) a.push_back(t);
        }
        for(i=0; i<n; i++){
            for(int j=0; j<a.size(); j++) if(v[i]%(1<<a[j])==0) v[i] |= 1<<(a[j]-1);
        }
        for(i=0; i<n; i++){
            if(i==0) cout <<v[i];
            else cout << " " <<v[i];
        } 
        cout << endl;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cf();
    return 0;
}
