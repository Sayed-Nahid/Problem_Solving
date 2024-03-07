#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, k, sum, indx, mn=INT_MAX;
    cin >> n >> k;
    int arr[n], pre[n+1]={0};
    for(i=0; i<n; i++){ cin >> arr[i]; pre[i+1]=pre[i]+arr[i];}
    for(i=0; i<=n-k; i++){
        sum = pre[i+k]-pre[i];
        if(sum<mn) mn=sum,indx = i+1;
    }
    cout << indx << endl;
    return 0;
}