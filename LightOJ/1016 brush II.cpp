#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, cno, n, w, i, x, y, cindx;
    cin >> t;
    for(cno=1; cno<=t; cno++){
        cin >> n >> w;
        int arr[n], nummove=0;
        for(i=0; i<n; i++){
            cin >> x >> y;
            arr[i]=y;
        }
        sort(arr, arr+n);
        cindx=arr[0];
        nummove++;
        for(i=0; i<n; i++){
            if(cindx+w<arr[i]){
                cindx=arr[i];
                nummove++;
            }
        }
        cout << "Case " << cno << ": " << nummove << "\n";

    }
    return 0;
}
