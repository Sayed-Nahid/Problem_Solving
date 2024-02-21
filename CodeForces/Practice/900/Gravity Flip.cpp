#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int n, i;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(i=0; i<n; i++){
        if(i==0) cout << arr[i];
        else cout << " " << arr[i];
    }
    return 0;
}