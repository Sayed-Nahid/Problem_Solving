#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, x, sum=0, cut;
    vector<int> ev, od;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> x;
        sum += x;
        if(x&1) od.push_back(x);
        else ev.push_back(x);
    }
    sort(od.rbegin(), od.rend());
    sort(ev.rbegin(), ev.rend());
    cut=min(od.size(), ev.size());
    sum -= accumulate(od.begin(), od.begin()+cut, 0);
    sum -= accumulate(ev.begin(), ev.begin()+cut, 0);
    if(od.size()>cut) sum -= od[cut];
    if(ev.size()>cut) sum-= ev[cut];
    cout << sum << endl;
    return 0;
}