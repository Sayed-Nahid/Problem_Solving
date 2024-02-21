#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, i, j, c;
    ll mx, sum, temp;
    string s;
    cin >> n >> m;
    vector<int> v(n);
    vector<vector<int>> upsol(n);
    ll arr[m]={0};
    for(i=0; i<m; i++) cin >> arr[i];
    for(i=0; i<n; i++){
        cin >> s;
        temp=0;
        for(j=0; j<m; j++){
            if(s[j]=='o') temp+=arr[j];
            else upsol[i].push_back(arr[j]);
        }
        v[i]=temp+i+1;
    }
    mx = *max_element(v.begin(), v.end());
    for(i=0; i<n; i++){
        int k=0, ans=v[i];
        sort(upsol[i].begin(), upsol[i].end(), greater<int>());
        while(mx>ans){
            ans+=upsol[i][k++];
        }
        cout << k << endl;
    }
    return 0;
}