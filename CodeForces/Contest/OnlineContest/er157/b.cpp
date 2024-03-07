#include<bits/stdc++.h>
#define sp(n) fixed << setprecision(n)
#define ll long long int
#define f(i, n) for(i; i<n; i++)
#define fr(n) for(i=n; i>=0; i--)
#define fill(arr, val) memset(arr, val, sizeof(arr))
using namespace std;
void cf(){
    int t, x, i, n;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        int size=n*2;
        int arr[size];
        for(i=0; i<size; i++) cin >> arr[i];
        sort(arr, arr+size);
        vector<pair<int, int>> v(n);
        int sum=0;
        for(i=0; i<n; i++){
            v[i].first=arr[i];
            v[i].second=arr[size-i-1];
        }
        for(i=1; i<n; i++){
            sum += abs(v[i].first - v[i-1].first);
            sum += abs(v[i].second - v[i-1].second);
        }
        cout << sum << endl;
        for(i=0; i<n; i++) cout << v[i].first << " " << v[i].second << endl;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cf();
    return 0;
}
