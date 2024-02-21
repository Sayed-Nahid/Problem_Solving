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
        int t, x, i, j, n, mn, mx, len;
        cin >> t;
        while(t--){
            cin >> n;
            
        }
    }
     
     
     
     
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int x, n, i, m, tmpm, c=0, pt, mx=0;
        string s;
        cin >> n >> m >> s;
        tmpm = m;
        for(i=0; i<n; i++){
            if(s[i]=='2') c++;
            else if(s[i]=='1'){
                if(tmpm !=0) tmpm--;
                else c++;
            }
            else tmpm=m, c=0;
            mx = max(mx, c);
        }
        cout << mx << e;
        return 0;
    }