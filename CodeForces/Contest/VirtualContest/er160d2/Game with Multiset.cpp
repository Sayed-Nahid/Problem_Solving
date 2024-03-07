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
    bool f;
    string s;
    int x, y, k, n, a, b, c=0, len;
    map<ll, ll> mp, val;
    mp[0] = 1ll;
    for(ll i=1; i<30; i++) mp[i]=mp[i-1ll]*2ll;
    ll ti, vi, m;
    cin >> m;
    for(ll i=0; i<m; i++){
        cin >> ti >> vi;
        if(ti == 1) val[mp[vi]]++;
        else{
            for(ll j=30; j>=0; j--){
                if(vi>=mp[j] && vi!=0){
                    if(val.count(mp[j])) vi -= min(vi/mp[j], val[mp[j]])*mp[j];
                }
            }
            cout << (vi==0? "YES\n": "NO\n");
        }
    }
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x, y, n, m, i, j, k, a, b, c=0, t=1;
    //cin >> t;
    while(t--){
        cf();
    }
    return 0;
}