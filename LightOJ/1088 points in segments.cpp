#include <bits/stdc++.h>
using namespace std;
int arr[100000];
int main() {
    int t, cno, n, q, i, a, b;
    cin >> t;
    for(cno=1; cno<=t; cno++){
        cin >> n >> q;
        for(i=0; i<n; i++) cin >> arr[i];
        cout << "Case " << cno << ":\n";
        for(i=0; i<q; i++){
            cin >> a >> b;
            a = lower_bound(arr, arr+n, a)-arr;
            b = upper_bound(arr, arr+n, b)-arr;
            cout << b-a << "\n";
        }
    }
    return 0;
}
