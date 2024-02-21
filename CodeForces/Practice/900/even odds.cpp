#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n, k;
    cin >> n >> k;
    if(k<=(n+1)/2) k=k*2-1;
    else k =(k-(n+1)/2)*2;
    cout << k << endl;
    return 0;
}