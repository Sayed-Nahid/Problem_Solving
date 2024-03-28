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

ll ok(string &s, ll n, ll mid){
    ll c=0;
    for(ll i=0; i<mid; i++){
        ll mxi=0, total=0;
        vector<ll> hash(26, 0);
        for(ll j=i; j<n; j+=mid){
            hash[s[j]-'a']+=1;
            mxi=max(mxi, hash[s[j]-'a']);
            total+=1;
        }
        c +=(total-mxi);
    }
    return c<=1;
}


void solve(){
    bool f=false;
    string s="";
    ll x, y, i, j, k, n, m, a, b, c=0, len;
    cin >> n;
    cin >> s;
    ll ans=n;
    for(i=1; i*i<=n; i++){
        if(n%i == 0){
            if(ok(s, n, i)) ans=min(ans, i);
            if(ok(s, n, n/i)) ans=min(ans, n/i);
        }
    }
    cout<<ans<<e;
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}