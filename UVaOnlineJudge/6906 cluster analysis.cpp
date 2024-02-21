#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, i, j, c, n, d;
    cin >> t;
    for(i=1; i<=t; i++){
        cin >> n >> d;
        int arr[n];
        for(j=0; j<n; j++) cin >> arr[j];
        sort(arr, arr+n);
        c=1;
        for(j=0; j<n-1; j++){
            if(abs(arr[j]-arr[j+1])>d) c++;
        }
        cout << "Case #" << i << ": " << c << endl;
    }
    return 0;
}
