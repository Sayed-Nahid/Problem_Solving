#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, m, i;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int arr[n][2][2];
        bool f=false;
        for(i=0; i<n; i++){
            cin >> arr[i][0][0] >> arr[i][0][1];
            cin >> arr[i][1][0] >> arr[i][1][1]; 
            if(arr[i][0][1] == arr[i][1][0]) f=true;
        }
        if(f && !(m&1)) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}