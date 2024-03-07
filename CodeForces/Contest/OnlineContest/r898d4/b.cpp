#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i, p;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        p=1;
        for(i=0; i<n; i++) cin >> arr[i];
        sort(arr, arr+n);
        arr[0]+=1;
        for(i=0; i<n; i++) p*=arr[i];
        cout << p << endl;
        
    }
    return 0;
}