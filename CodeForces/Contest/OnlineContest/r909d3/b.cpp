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
    int t, x, n, i;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int>a(n), div;
        for(i=0; i<n; i++) cin >> a[i];
        for(i=1; i*i<=n; i++){
            if(n%i==0){
                 div.push_back(i);
                 if(i*i!=n) div.push_back(n/i);
            }        
        }
        ll ans=0;
        for(auto d: div){
            ll mx=0, mn=LLONG_MAX, sum=0;
            int c=0;
            for(i=0; i<n; i++){
                sum += a[i];
                c++;
                if(c == d){
                    mx = max(mx, sum);
                    mn = min(mn, sum);
                    c=sum=0;
                }
            }
            ans = max(ans, mx-mn);
        }
        cout<<ans<<e;
    }
}




int main()
{
    int x;
    string s;
    cf();
    return 0;
}