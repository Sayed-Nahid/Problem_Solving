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
    int t, x;
    cin >> t;
    while(t--){
        cin >> x;
        cout<<x<<e;
    }
}




int main()
{
    int x;
    string s;
    //cf();
    int n, m, a;
    cin >> n >> m >> a;
    if(n==m && n==a) cout << a << e;
    else{
        if(n%a) n = n/a +1;
    else n = n/a;
    if(m%a) m = m/a + 1;
    else m = m/a;
    cout << n+m << e;
    }
    return 0;
}