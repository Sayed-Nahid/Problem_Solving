#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, q, i, cno=1, x, j, indx;
    bool exist;
    while(cin >> n >> q && n){
        int arr[n];
        for(i=0; i<n; i++) cin >> arr[i];
        sort(arr, arr+n);
        cout << "CASE# " << cno++ << ":\n";
        for(i=0; i<q; i++){
            cin >> x;
            exist=false;
            for(j=0; j<n; j++){
                if(x == arr[j]){
                    exist=true;
                    indx=j+1;
                    break;
                }
            }
            if(exist) cout << x << " found at " << indx << endl;
            else cout << x << " not found\n";
        }
    }
    return 0;
}
