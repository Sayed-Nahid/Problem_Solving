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
    int x, n, i, ans;
    string s;
    //cf();
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n, greater<int>());
    if(n&1){
        cout << n/2 << "\n";
        for(i=0; i<n/2; i++){
            cout << arr[i] << " " << arr[n-i-1] << " ";
        }
        cout << arr[n/2] << endl;
    }
    else{
        cout << (n-1)/2 << "\n";
        for(i=0; i<n/2; i++){
            if(i == 0) cout << arr[i] << " " << arr[n-i-1];
            else cout << " " << arr[i] << " " << arr[n-i-1];
        }
        cout << "\n";
    }
    return 0;
}