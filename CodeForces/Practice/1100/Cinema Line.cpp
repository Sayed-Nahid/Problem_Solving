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
    cin >> t;
    while(t--){
        cin >> n;
        cout<<x<<e;
    }
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x, y, n, m, i, j, k, a, b, c=0;
    bool f=false;
    string s;
    //cf();
    cin >> n;
    int arr25=0, arr50=0, arr100=0;
    for(i=0; i<n; i++){
        cin >> x;
        if(x == 25) arr25++;
        else if(x==50) {
            if(arr25<=0) f=true;
            else arr50++, arr25--;
            }
        else if(x==100){
            if(arr25<=0 && arr50<=0) f=true;
            else{
                if(arr50>0 && arr25>0) arr100++, arr50--, arr25--;
                else if(arr50<=0 && arr25>=3) arr25-=3;
                else f=true;
            }
        }
    }
    if(f) cout << "NO\n";
    else cout << "YES\n";
    return 0;
}