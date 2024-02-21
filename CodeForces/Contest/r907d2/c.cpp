#include<bits/stdc++.h>
#define sp(n) fixed << setprecision(n)
#define ll long long int
#define f(i, n) for(i; i<n; i++)
#define fr(n) for(i=n; i>=0; i--)
#define fill(arr, val) memset(arr, val, sizeof(arr))
using namespace std;
void cf(){
    int t, i, n;
    ll sum,temp,ans, r, x;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        sum=temp=ans=x=0;
        vector<ll> v(n);
        for(i=0; i<n; i++) {cin >> v[i]; sum+=v[i];} 
        ans =sum;
        sort(v.rbegin(),v.rend());    
        for(i=0; i<n; i++){
            temp+=v[i];
            sum-=v[i];
            if(temp>sum) x=(temp-sum+1)/2;
            r=sum+x;
            ans=min(ans, i+1+r);
            x=0;
        } 
        cout << ans << "\n";  
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cf();
    return 0;
}
