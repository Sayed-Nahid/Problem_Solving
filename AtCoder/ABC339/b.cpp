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
        string s, ans;
        ll t=1, x, i, j, n, mn, mx, len, c=0;
        //cin >> t;
        while(t--){
            cin >> n;
            ll arr[n], sum=0;
            for(i=0; i<n; i++) {
                cin >> x;
                if(x<0){
                    if(abs(x)>sum) sum=0;
                    else sum -= abs(x);
                }
                else sum += x;
            }
            cout << sum << e;
        }
    }
     
     
     
     
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int x, len, n, i;
        string s;
        cf();
        return 0;
    }