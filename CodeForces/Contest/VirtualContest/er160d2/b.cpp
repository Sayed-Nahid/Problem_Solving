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
    int x, y, i, j, k, n, m, a, b, c=0, len;
    cin >> s;
    len = s.length();
    vector<int> cnt(2, 0);
    for(i=0; i<len; i++) cnt[s[i]-'0']++;
    for(i=0; i<len; i++){
        int need = (s[i]-'0')^1;
        if(cnt[need]==0){
            cout << len-i << e;
            return;
        }
        cnt[need]--;
    }
    cout<<0<<e;
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x, y, n, m, i, j, k, a, b, c=0, t=1;
    cin >> t;
    while(t--){
        cf();
    }
    return 0;
}