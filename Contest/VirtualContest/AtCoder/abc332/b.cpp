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
        int x, len, n, i, s, m, l, j, k, ans=INT_MAX;
        //string s;
        //cf();
        cin >> n >> s >> m >> l;
        for(i=0; i<=17; i++){
            for(j=0; j<=13; j++){
                for(k=0; k<=9; k++){
                    if(i*6+j*8+k*12>=n){
                        ans = min(ans, i*s+j*m+k*l);
                    }
                }
            }
        }
        cout << ans << e;
        return 0;
    }