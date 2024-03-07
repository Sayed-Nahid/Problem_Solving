#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin >> t;
    while(t--){
        long long int n, m, b, a1=0, A=0, B=0, i;
        cin >> n >> m;
        vector<long long int> a(n);
        for(i=0; i<n; i++){
            cin >> a[i];
        }
        for(i=0; i<m; i++){
            cin >> b;
            B |= b;
        }
        for(i=0; i<n; i++){
            A ^= a[i];
            a1 ^= (a[i]|B);
        }
        if(n%2) cout << A << " " << a1 << endl;
        else cout << a1 << " " << A << endl;
    }
    return 0;
}