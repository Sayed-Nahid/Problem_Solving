#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, i, j, x, indx;
    cin >> n;
    vector<int> v(n+1);
    v[0]=0;
    for(i=1; i<=n; i++){
        cin >> x;
        v[i] = v[i-1]+x;
    }
    cin >> m;
    for(i=0; i<m; i++){
        cin >> x;
        indx= lower_bound(v.begin()+1, v.end(), x)-v.begin();
        cout << indx << endl;
    }
    return 0;
}