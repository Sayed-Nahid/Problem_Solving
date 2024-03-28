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
void mn(ll x){
    if(x<10) cout << 0 << x;
    else cout << x;
}

void solve(){
    bool f=false;
    string s="";
    char ch;
    ll x, y, i, j, k, n, m, a, b, c=0, len;
    cin >> s;
    string hour=s.substr(0,2);
    int h = stoi(hour);
    string ap="";
    if(h>12){
        h = h-12;
        ap="PM";
    }
    else if(h==00){
        h=12;
        ap="AM";
    }
    else if(h==12) ap="PM";
    else ap="AM";
    s[1]=static_cast<char>(h%10 +'0');
    h/=10;
    s[0]=static_cast<char>(h%10+'0');
    cout << s << " " << ap << e;
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