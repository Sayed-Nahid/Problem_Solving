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
    int t, x, y, i, j, k, n, m, a, b, c=0;
    bool f;
    cin >> t;
    while(t--){
        cin >> s;
        f=true;
        int len=s.length();
        for(i=1; i<len; i++){
            string a = s.substr(0, i);
            string b = s.substr(i, len-i);
            n = stoi(a);
            m = stoi(b);
            if(a[0] != '0' && b[0] != '0' && n<m){
                cout << n << ' ' << m << e;
                f=false;
                break;
            }
        }
        if(f) cout << -1 << e;
    }
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x, y, n, m, i, j, k, a, b, c=0;
    string s;
    cf();
    return 0;
}