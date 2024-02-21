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
        int t, x, i, j, n, mn, mx, len, k;
        cin >> t;
        while(t--){
            cin >> n >> k;
            int n1 = n-(k-1);
            if(n1>0 && n1%2==1){
                cout << "YES\n";
                for(i=0; i<k-1; i++) cout << "1 ";
                cout << n1 << e;
                continue; 
            }
            int n2 = n- 2*(k-1);
            if(n2>0 && n2%2==0){
                cout << "YES\n";
                for(i=0; i<k-1; i++) cout << "2 ";
                cout << n2 << e;
                continue;
            }
            cout << "NO\n";
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