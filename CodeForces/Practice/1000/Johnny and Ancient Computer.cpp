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
    int t, x, i, j, n, c;
    ll a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a == b){ cout << 0 << e; continue;}
        else if(b>a) swap(a, b);
        if(a%b != 0) cout << -1 << e;
        else{
            c=0;
            while(a > b){
                if(a%8==0 && (a/8)>=b) a/=8, c++;
                else if(a%4==0 && (a/4)>=b) a/=4, c++;
                else if(a%2==0 && (a/2)>=b) a/=2, c++;
                else break;
            }
            if(a==b) cout << c << e;
            else cout << -1 << e;
        }
    }
}




int main()
{
    int x;
    string s;
    cf();
    return 0;
}