#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, li, ri, i, n, k, start, end, mid;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        start=end=mid=0;
        for(i=0; i<n; i++){
            cin >> li >> ri;
            if(li==ri && li==k) mid++;
            else if(li==k) start++;
            else if(ri==k) end++;
        }
        if(mid>0 || start>0 && end>0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}