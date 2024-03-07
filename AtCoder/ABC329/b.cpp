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
    int x, n, i, j, mx, smx;
    //string s;
    //cf();
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++) cin >> arr[i];
    int large = arr[0];
    for(i=1; i<n; i++)
    {
        if(large<arr[i])
            large = arr[i];
    }
    int slarge = -1;
    for(i=0; i<n; i++)
    {
        if(slarge<arr[i] && arr[i]<large)
        {
                slarge = arr[i];
        }
    }
    cout << slarge << e;
    return 0;
}