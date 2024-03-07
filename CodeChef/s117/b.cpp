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
    bool f=true;
    string s;
    int y, i, j, n, m, a, b, c=0, len;
    cin >> s;
    len = s.length();
    for(i=0; i<len; i++){
        if(s[i]!='A') f=false;
    }
    if(f){
        cout << "YES\n";
        return;
    }
    for(i=0; i<len; i++){
        if(s[i]!='B') f=false;
    }
    if(f){
        cout << "YES\n";
        return;
    }
    for(i=0; i<len; i++){
        if(s[i]!='C') f=false;
    }
    if(f){
        cout << "YES\n";
        return;
    }
    else{
        char ch=s[0];
        f=true;
        for(i=0; i<len; i++){
            if(s[i]!=ch && c==0){
                if(s[i]=='B'){
                    ch = 'B';
                    c++;
                }
                else{
                    f=false;
                    break;
                }
            }
            if(s[i]!=ch && c==1){
                if(s[i]=='C'){
                    ch = 'C';
                    c++;
                }
                else{
                    f=false;
                    break;
                }
            }
            if(s[i]!=ch && c==2) f=false;
        }
        if(f) cout << "YES\n";
        else cout << "NO\n";
    }
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--){
        cf();
    }
    return 0;
}