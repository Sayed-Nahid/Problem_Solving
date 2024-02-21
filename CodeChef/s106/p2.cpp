#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i, x;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> odd, even;
        for(i=0; i<n; i++) {
            cin >> x;
            if(x&1) odd.push_back(x);
            else even.push_back(x);
        }
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end(), greater<int>());
        int o,e;
        o=0, e=1;
        cout << even[0];
        for(i=1; i<n; i++){
            if((i&1) && o<odd.size()) cout << " " << odd[o++];
            else if(e<even.size()) cout << " " << even[e++];
        }
        cout << endl;
    }
    return 0;
}