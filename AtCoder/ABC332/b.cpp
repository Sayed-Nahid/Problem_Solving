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
        int x, len, n, i, k, g, m, sm=0, sg=0, tmp;
        //string s;
        //cf();
        cin >> k >> g >> m;
        for(i=0; i<k; i++){
              if(sg==g) sg=0;
              else if(sm == 0) sm = m;
              else{
                    tmp = (g-sg);
                    if(tmp>=sm) {sg=sm; sm=0;}
                    else   {sm -= tmp;
                    sg += tmp;}
                    
              }
        }
        cout << sg << " " << sm << e;
        return 0;
    }