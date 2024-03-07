#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, k, d;
    cin >> t;
    while(t--){
        cin >> n >> k;
        if(n==k) cout << 1 << "\n";
        else if(n<k){
            d = k/n;
            if(k%n) d++;
            cout << d << endl;
        }
        else{
            d = n/k;
            if(n%k) d++;
            k *= d;
            d = k/n;
            if(k%n) d++;
            cout << d << endl;
        }
    }
    return 0;
}