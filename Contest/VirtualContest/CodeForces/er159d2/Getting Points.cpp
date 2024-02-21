#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int tc, n, p, l, t, mid, e, s, work, mxtask, neededp, day;
    cin >> tc;
    while(tc--){
        cin >> n >> p >> l >> t;
        s = 0;
        e = n;
        mxtask=(n+6)/7;
        while(e-s>1){
            mid=(s+e)/2;
            work = n-mid;
            neededp=work*l;
            day= min(work*2, mxtask);
            neededp += day*t;
            if(neededp >= p) s=mid;
            else e=mid;
        }
        cout << s << endl;
    } 
    return 0;
}