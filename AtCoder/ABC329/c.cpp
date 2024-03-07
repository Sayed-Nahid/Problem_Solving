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
    int t, x, i, j, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout<<x<<e;
    }
}




int main()
{
    int x, n, m, i, j, ms=0, msv;
    //string s;
    //cf();
    cin >> n >> m;
    int arr[n]={0};
    vector<int> v;
    for(i=0; i<m; i++){
        cin >> x;
        arr[x-1]++;
        if(ms<arr[x-1]){
            v.push_back(x);
            ms=arr[x-1];
            msv=x;
        }
        else if(ms == arr[x-1]){
            if(x)
            v.push_back(msv);
            msv=x;
        }
        v.push_back(msv);
    }
    for(i=0; i<m; i++) cout << v[i] << e;
    return 0;
}