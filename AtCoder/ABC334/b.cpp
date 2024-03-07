/*
            Name: Sayed Nahid
            CodeForces: Y0urFriend
            email: nahid15-3849@diu.edu.bd
            Daffodil International University
*/

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
    ll x, y, i, j, k, n, m, a, b, c=0, len, l, r;
    cin >> a >> m >> l >> r;
    ll L = l+((a-l)%m+m)%m;
    ll R =r-((r-a)%m+m)%m;
    cout<<(R-L)/m+1<<e;
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--){
        cf();
    }
    return 0;
}