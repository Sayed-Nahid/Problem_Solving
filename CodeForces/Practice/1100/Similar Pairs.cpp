#include<bits/stdc++.h>
#define sp(n) fixed << setprecision(n)
#define ll long long int
#define f(i, n) for(i; i<n; i++)
#define fr(n) for(i=n; i>=0; i--)
#define fill(arr, val) memset(arr, val, sizeof(arr))
using namespace std;
void cf(){
    int x, i, n, j, o=0, e=0;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++){ 
        cin >> arr[i]; (arr[i]&1)? o++: e++;
    }
    if(o%2 != e%2) cout << "NO\n";
    else{
        if(o%2==1 && e%2==1){
            for(i=0; i<n-1; i++){ 
                for(j=i+1; j<n; j++){
                    if((arr[i]%2 != arr[j]%2) && (abs(arr[i]-arr[j])==1)){
                        cout << "YES\n";
                        return;
                    }
                }
            }
            cout << "NO\n";
        }
        else cout << "YES\n";
    }
    return;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) cf();
    return 0;
}
