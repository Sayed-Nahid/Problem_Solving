/*
            Name: Sayed Nahid
            CodeForces: Y0urFriend
            email: nahid15-3849@diu.edu.bd
            Daffodil International University
*/

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
    bool f;
    string s;
    int x, y, i, j, k, n, m, a, b, c=0, len;
    cin >> n;
    int pos=0, npos=0, posn=0, nn=0;
    for(i=0; i<n; i++){
        cin >> x >> y;
        if(x>0 && y>0) pos=1;
        else if(x<0 && y>0) npos=1;
        else if(x>0 && y<0) posn=1;
        else if(x<0 && y<0) nn=1;
    }
    if(pos && npos && posn && nn) cout << "NO\n";
    else  cout<<"YES"<<e;
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