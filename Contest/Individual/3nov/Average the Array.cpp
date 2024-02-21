#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, i, j, q, x, mask, c;
    bool f;
    cin >> n;
    int arr[n], pre[n+1], sum=0;
    for(i=0; i<n; i++) cin >> arr[i];
    cin >> q;
    for(i=0; i<q; i++){
        cin >> x;
        for(mask=0; mask<(1<<n); mask++){
            long long int sum=0;
            c=0;
            for(j=0; j<n; j++){
                if(mask&(1<<j)) sum+=arr[j], c++;
            }
            if((sum/c)<x) break;
        }
        cout << c << endl;
    }
    return 0;
}