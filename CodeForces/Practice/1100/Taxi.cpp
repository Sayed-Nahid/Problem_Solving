#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, i, x, ans=0, sum=0;
    ll arr[4]={0};
    cin >> n;
    for(i=0; i<n; i++){
         cin >> x;
         if(x == 4) ans++;
         else arr[x]++;
    }
    if(arr[3]>=arr[1]) {ans += arr[3]; arr[1]=0;}
    else{
        ans += arr[3];
        arr[1] = arr[1]-arr[3];
    }
    ans += arr[2]/2;
    arr[2] = arr[2]%2;
    sum = arr[2]*2 + arr[1];
    ans += sum/4;
    if(sum%4) ans++;
    cout << ans << endl;
    return 0;
}