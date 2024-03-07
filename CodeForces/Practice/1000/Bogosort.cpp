#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        for(i=0; i<n; i++) cin >>v[i];
        sort(v.begin(), v.end(),  greater<int>());
        for(i=0; i<n; i++) cout << v[i] <<" \n"[i==n-1]; 
    }
    return 0;
}