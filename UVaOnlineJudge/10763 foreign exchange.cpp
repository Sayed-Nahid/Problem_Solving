#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i;
    while(cin >> n && n){
        vector<int> city(n), target(n);
        for(i=0; i<n; i++) cin >> city[i] >> target[i];
        sort(city.begin(), city.end());
        sort(target.begin(), target.end());
        if(city == target) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
