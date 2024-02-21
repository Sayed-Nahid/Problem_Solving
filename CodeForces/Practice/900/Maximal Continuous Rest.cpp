#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, c, stop;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++) cin >> arr[i];
    stop=n, c=0;
    if(arr[0]==1 && arr[n-1]==1){
        for(i=n-1; i>=0; i--){
            if(arr[i]==1) c++;
            else
            {
                stop=i;
                break;
            }
        }
    }
    int ans=-1;
    if(i != 0){
        for(i=0; i<=stop; i++){
            if(arr[i]==1) c++;
            else {ans = max(ans, c); c=0;}
        } 
    }
    cout << ans << endl;
    return 0;
}