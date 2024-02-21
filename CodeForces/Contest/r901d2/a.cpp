#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, m, k, i, x, temp;
    long long int sum=0;
    cin >> t;
    while(t--){
        cin >> m >> n >> k;
        sum = n-1;
        for(i=0; i<k; i++){
            cin >> x;
            if(x>m){
                sum+=m;
            }
            else sum+=x;
        }
        cout << sum << endl;
    }
    return 0;
}