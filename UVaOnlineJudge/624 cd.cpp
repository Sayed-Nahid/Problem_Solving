#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int n, i, mask;
    ll  sum,mxsum, ans;
    vector<int> v, tv;
    while(cin >> mxsum){
        cin >> n;
        v.clear(), ans=0;
        int arr[n];
        for(i=0; i<n; i++) cin >> arr[i];
        for(mask=0; mask<(1<<n); mask++){
            sum=0, tv.clear();
            for(i=0; i<n; i++) if(mask & (1 << i)){
                sum += arr[i];
                tv.push_back(arr[i]);
            }
            if(sum<=mxsum && sum>ans){
                ans = sum;
                v = tv;
            }
        }
        for(i=0; i<v.size(); i++) cout << v[i] << " ";
        cout << "sum:" << ans << endl;
    }
    return 0;
}