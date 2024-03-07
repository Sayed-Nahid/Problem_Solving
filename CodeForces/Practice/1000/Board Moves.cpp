#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t, n, len, i, incre, sum, temp;
    cin >> t;
    while(t--){
        cin >> n; 
        len=n/2;
        sum =0;
        for(i=1; i<=len; i++){
            sum += i*i;
        }
        cout << sum*8 << endl;
    }
    return 0;
}