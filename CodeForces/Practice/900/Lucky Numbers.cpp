#include<bits/stdc++.h>
#include<string>
using namespace std;
int find(int x){
    int mn=INT_MAX, mx=INT_MIN;
    mn=mx=0;
    while(x!=0){
        mn=min(mn, x%10);
        mx=max(mx, x%10);
        x/=10;
    }
    return mx-mn;
}

int main(){
    int t, l, r, i, mx, ans, dif, mn;
    cin >> t;
    while(t--){
        cin >> l >> r;
        dif=ans=-1;
        for(i=l; i<=min(l+100, r); i++){
            string s = to_string(i);
            mx=s[0], mn=s[0];
            for(int j=1; j<s.length(); j++){
                mx = max(mx, (int)s[j]);
                mn = min(mn, (int)s[j]);
            }
            if(mx-mn>dif) ans=i, dif=mx-mn;
        }
        cout << ans << endl;
    }
    return 0;
}