#include<bits/stdc++.h>
using namespace std;
typedef     long long int    ll;
typedef     long double   ld;
typedef     vector<ll>      vll;
#define     fi              first
#define     print(v)        for(ll i:v) cout<<i<<ss
#define     se              second
#define     pb              push_back
#define     e              "\n"
#define     all(p)          p.begin(),p.end()
#define     zz(v)           (ll)v.size()
#define     S(a)            scanf("%lld",&a)
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define     ss              ' '
#define     pii             pair<ll,ll>
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
const double eps = 1e-7;

void cf(){
    string s;
    int t, x, i, j, n, mn, mx, len;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> v(n);
        for(i=0; i<n; i++) cin >> v[i];
        mn = *min_element(v.begin(), v.end());
        mx = *max_element(v.begin(), v.end());
        vector<int> ans;
        while(mn != mx){
            x = (mn&1) && !(mx&1);
            ans.push_back(x);
            mn = (mn+x)/2;
            mx = (mx+x)/2;
        }
        len = ans.size();
        cout << len << e;
        if(!ans.empty() && len<=n) for(i=0; i<len; i++) cout << ans[i] << " \n"[i == len-1];
    }
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x;
    string s;
    cf();
    return 0;
}