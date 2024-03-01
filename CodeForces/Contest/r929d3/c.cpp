/*
            Name: Sayed Nahid
            CodeForces: Y0urFriend
            email: nahid15-3849@diu.edu.bd
            Daffodil International University
*/

#include<bits/stdc++.h>
using namespace std;
typedef     long long int     ll;
typedef     long double       ld;
typedef     vector<ll>        vll;
typedef     vector<int>       vint;
#define     vsort(v)          sort(v.begin(), v.end())
#define     vsortre(v)        sort(v.begin(), v.end(), greater<int>())
#define     arrsort(arr, n)   sort(arr, arr+n)
#define     arrsortre(arr, n) sort(arr, arr+n, greater<int>())
#define     fi                first
#define     print(v)          for(ll i:v) cout<<i<<ss
#define     se                second
#define     pb                push_back
#define     e                 "\n"
#define     all(p)            p.begin(),p.end()
#define     zz(v)             (ll)v.size()
#define     S(a)              scanf("%lld",&a)
#define     SS(a,b)           scanf("%lld %lld",&a,&b)
#define     SSS(a,b,c)        scanf("%lld %lld %lld",&a,&b,&c)
#define     ss                ' '
#define     pii               pair<ll,ll>
#define     gcd(a,b)          __gcd(a,b)
#define     lcm(a,b)          (a*b)/gcd(a,b)
#define     setp(a)           fixed << setprecision(a)
const double eps = 1e-7;

bool div(ll l, ll ta, ll tb){
    if(l%(ta*tb)==0) return true;
    return false;
}


void cf(){
    bool f;
    string s;
    ll x, y, i, j, k, n, m, a, b, c=0, len, l;
    cin >> a >> b >> l;
    set<ll> st;
    if(a>b) swap(a, b);
    for(i=0; i<=l; i++){
        ll ta = pow(a, i);
        if(ta>l) break;
        for(j=0; j<=l; j++){
            ll tb = pow(b, j);
            if((ta*tb)>l) break;
            if(tb>l) break;
            if(div(l, ta, tb)){
                st.insert(l/(ta*tb));
            }
        }
    }
    cout<<st.size()<<e;
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    while(t--){
        cf();
    }
    return 0;
}