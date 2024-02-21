#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace std;
#define getbit(n, i) (((n) & (1LL << (i))) != 0) 
#define setbit0(n, i) ((n) & (~(1LL << (i)))) 
#define setbit1(n, i) ((n) | (1LL << (i))) 
#define togglebit(n, i) ((n) ^ (1LL << (i))) 
#define lastone(n) ((n) & (-(n))) 
char gap = 32;
#define int long long
#define ll long long 
#define lll __int128_t
#define pb push_back
typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll hashPrime = 1610612741;
void solve() {
    int n; cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    int GCD = 0;
    for(int i = 2; i <= n; i++) {
        GCD = __gcd(GCD, a[i] - a[i - 1]);
    }
    if(GCD == 0) {
        cout << n << "\n";
        return ;
    }
    int flag = 0;
    vector<int> calc;
    int curr = n;
    while(curr > 1) {
        calc.push_back(a[curr]);
        if(flag) {
            curr--;
            continue;
        }
        if(a[curr] - GCD > a[curr - 1]) {
            flag = 1;
            calc.push_back(a[curr] - GCD);
        }
        curr--;
    }
    calc.push_back(a[1]);
    reverse(calc.begin(), calc.end());
    if(flag == 0) {
        calc.push_back(a[n] + GCD);
    }
    int ans = 0;
    for(int i = 0; i <= n; i++) {
        ans = ans + (calc[n] - calc[i]) / GCD;
    }
    cout << ans << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}