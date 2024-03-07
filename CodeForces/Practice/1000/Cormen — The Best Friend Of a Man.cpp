#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, i, extra=0, temp;
    cin >> n >> k;
    int a[n], b[n];
    for(i=0; i<n; i++) cin >> a[i];
    b[0]=a[0];
    for(i=1; i<n; i++){
        if(a[i]+a[i-1] < k){
            temp=k-(a[i]+a[i-1]);
            a[i]+=temp;
            extra+=temp;
        }
        //else b[i]=a[i];
    }
    cout << extra << endl << a[0];
    for(i=1; i<n; i++) cout << " " << a[i];
    return 0;
}