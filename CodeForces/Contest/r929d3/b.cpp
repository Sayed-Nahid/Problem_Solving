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

void cf(){
    bool f;
    string s;
    int x, y, i, j, k, n, m, a, b, c=0, len;
    cin >> n;
    ll sum=0;
    vector<int> v(n);
    for(i=0; i<n; i++){
        cin >> v[i];
        sum += v[i];
    }
    if(sum%3==0) cout << 0 << e;
    else{
        ll minchanges=sum%3==1?2:1;
        for(auto it:v){
            ll tsum = sum-it;
            ll changes=0;
            if(tsum%3==0) changes=1;
            else{
                changes = tsum%3==1?2:1;
                changes++;
            }
            minchanges=min(changes, minchanges);
        }
        cout << minchanges << e;
    }
    //cout<<x<<e;
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