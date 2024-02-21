#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n, x, i, sum=0, need, ans=-1;
    cin >> n >> x;
    n--;
    int arr[n];
    for(i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr+n);
    sum -= (arr[0]+arr[n-1]);
    need = x-sum;
    if(need<=arr[0]) ans=0;
    else if(need >arr[0] && need<=arr[n-1]) ans=need;
    cout << ans << endl;
    return 0;
}