#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i;
    long long int sum;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        for(i=0; i<n; i++) cin >> arr[i];
        sort(arr, arr+n);
        sum=0;
        for(i=(n%3); i<n; i+=3) sum+=arr[i];
        cout << sum << endl;
    }
    return 0;
}
