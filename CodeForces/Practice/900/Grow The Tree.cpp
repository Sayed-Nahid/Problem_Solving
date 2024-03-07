#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int n, i, x;
    ll sumx=0, sumy=0;
    cin >> n;
    ll arr[n];
    for(i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(i=0; i<n/2; i++){
        sumx += arr[i];
        sumy += arr[n-i-1];
    }
    if(n&1) sumy += arr[n/2];
    cout << (sumx*sumx)+(sumy*sumy) << endl; 
    return 0;
}