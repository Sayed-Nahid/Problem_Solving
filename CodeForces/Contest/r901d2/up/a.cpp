#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t, a, b, n, i, x;
    ll sum;
    cin >> t;
    while(t--){
        cin >> a >> b >> n;
        sum=b;
        a-=1;
        for(i=0; i<n; i++){
            cin >> x;
            if(x >= a) sum+=a;
            else sum+=x;
        }
        cout << sum << endl;
    }
    return 0;
}