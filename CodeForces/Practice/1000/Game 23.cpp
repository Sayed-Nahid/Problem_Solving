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
    int t, x, n, m, c=0, d;
    cin >> n >> m;
    if(m%n!=0) c=-1;
    else{
        d = m/n;
         while(d%2==0) d/=2, c++;
         while(d%3==0) d/=3, c++;
         if(d != 1) c=-1;
    }
    cout << c << e;
}




int main()
{
    int x;
    string s;
    cf();
    return 0;
}