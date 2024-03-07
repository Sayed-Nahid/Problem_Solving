#include<bits/stdc++.h>
using namespace std;
int arr[100001];
int main(){
    long long int n, t, x;
    cin >> t;
    while(t--){
        cin >> n >> x;
        cout << ((x*x<=n && x%2==n%2)?"YES\n": "NO\n");
    }
    
    return 0;   
}