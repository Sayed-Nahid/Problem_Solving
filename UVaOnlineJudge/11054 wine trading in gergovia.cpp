#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, x;
    while(cin >> n && n){
        long long ans=0,temp=0;
        while(n--){
            cin >> x;
            ans += abs(temp);
            temp += x;
        }
        cout << ans << endl;
    }
    return 0;
}