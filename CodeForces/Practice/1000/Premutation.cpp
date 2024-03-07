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
    int t, x, i, j, n, fval;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n][n-1]={0};
        for(i=0; i<n; i++) for(j=0; j<n-1; j++) cin >> arr[i][j];
        fval=arr[0][0];
        if(fval != arr[1][0] && fval != arr[2][0]) fval=arr[1][0];
        for(i=0; i<n; i++){
            if(arr[i][0] != fval){
                cout << fval << " ";
                for(j=0; j<n-1; j++) cout << arr[i][j] << " \n"[j==n-2];
            }
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