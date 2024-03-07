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
    ll t, x, i, j, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll a[n+4];
        for(i=1; i<=n; i++) cin >> a[i];
        if(n==1) cout << a[1]-1 << e;
        else{
            vector<ll> r;
            r.push_back(1);
            for(i=1; i<=n; i++) if(a[i]!=r[r.size()-1]) r.push_back(a[i]);
            ll ans=0;
            for(i=0; i<r.size()-1; i++) if(r[i]<r[i+1]) ans+=(r[i+1]-r[i]);
            cout << ans << e;
        }
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