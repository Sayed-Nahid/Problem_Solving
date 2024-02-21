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
        int x, len, n, i, indx, sum;
        string s;
        //cf();
        cin >> n;
        vector<int> v(n), ans(n), exe(n);
        for(i=0; i<n; i++) {cin >> v[i]; exe[i]=v[i];}
        sort(v.begin(), v.end());
        for(i=0; i<n; i++){
            x = exe[i];
            indx = upper_bound(v.begin(), v.end(), x)-v.begin();
            sum = accumulate(v.begin()+indx, v.end(), 0);
            ans[i] = sum;
        }
        for(i=0; i<n; i++) cout << ans[i] << " \n"[i==n-1];
        return 0;
    }