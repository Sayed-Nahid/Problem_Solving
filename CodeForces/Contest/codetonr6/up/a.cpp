#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, k, x, sum;
    cin >> t;
    while(t--){
        cin >> n >> k >> x;
        sum = ((k-1)*k)/2;
        if(x==k){
            if(n-k>=0) sum +=((x-1)*(n-k));
        }
        else if(k>x+1) sum=-1;
        else{
            if(n-k>=0) sum+=(x*(n-k));
        }
        if(n<k) sum=-1;
        cout << sum << endl;
    }
    return 0;
}