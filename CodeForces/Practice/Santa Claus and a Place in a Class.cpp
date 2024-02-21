#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, y;
    int t, x, m;
    cin >> n >> m >> k;
    y = k/(m*2);
    if(k%(m*2)) y++;
    x = ((k+1)/2)%m;
    if(!x) x=m;
    cout << y << " " << x << " ";
    if(k&1) cout << "L\n";
    else cout << "R\n";
    return 0;
}