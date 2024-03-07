#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i, k, ans, j, l, x;
    cin >> t;
    while(t--){
        cin >> n;
        vector<vector<int>> vec(n);
        vector<int> alluni(51);
        for(i=0; i<n; i++){
            cin >> k;
            vec[i].resize(k);
            for(auto &a: vec[i]) cin >> a;
            for(auto e: vec[i]) alluni[e]=1;
        }
        ans=0;
        vector<int> subuni(51);
        for(i=1; i<51; i++){
            if(!alluni[i]) continue;
            fill(subuni.begin(), subuni.end(), 0);
            for(j=0; j<n; j++){
                if(binary_search(vec[j].begin(), vec[j].end(), i)) continue;
                for(auto a: vec[j]) subuni[a]=1;
            }
            ans=max(ans, accumulate(subuni.begin(), subuni.end(), 0));
        }
        cout << ans << endl;
    }
    return 0;
}