#include<bits/stdc++.h>
#define mp make_pair
using namespace std;
typedef long long ll;
const int N=1000;
vector<int> prime;
vector<pair<int, int>> divisor;
bool vis[N];

bool compair(pair<int, int> x, pair<int, int> y)
{
    if(x.second < y.second) return 1;
    else if(x.second==y.second && x.first>y.first) return 1;
    else return 0;
}
void divisorCount(int n)
{
    int temp=n;
    int ans=1, i, countnum;
    for(i=0; i<prime.size() && prime[i]*prime[i]<=n; i++)
    {
        countnum=1;
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                countnum++;
                n/=prime[i];
            }
            ans *= countnum;
        }
    }
    if(n>1) ans*=2;
    divisor.push_back(mp(temp, ans));
}
void sieve()
{
    for(int i=3; i*i<=N; i+=2)
    {
        if(vis[i]==0) for(int j=i*i; j<=N; j+=2*i) vis[j]=1;
    }
    prime.push_back(2);
    for(int i=3; i<=N; i+=2) if(vis[i]==0) prime.push_back(i);
}
int main()
{
    int t, n, i;
    sieve();
    for(i=1; i<=N; i++) divisorCount(i);
    sort(divisor.begin(), divisor.end(), compair);
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        cout << "Case " << i << ": " << divisor[n-1].first << endl;
    }
    return 0;
}