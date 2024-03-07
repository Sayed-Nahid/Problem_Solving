#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int arr[3];
    while(t--){
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr+3);
        if(arr[0]==arr[1] && arr[1]==arr[2]) cout << "YES\n";
        else if(arr[1]%arr[0]==0 && arr[2]%arr[0]==0 && (((arr[1]/arr[0])-1)+((arr[2]/arr[0])-1))<=3) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}