#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t, n, i;
    int x, y;
    cin >> t;
    while(t--){
        cin >> n;
        int ans=INT_MAX;
        for(i=0; i<n; i++){
            cin >> x >> y;
            ans=min(ans, x+(y-1)/2);
        }
        cout << ans << endl;
    }
    return 0;
}