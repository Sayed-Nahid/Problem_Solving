#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, x, y;
    cin >> n;
    bool alex=false;
    for(i=0; i<n; i++){ cin >> x >> y; if(x!=y) alex=true;}
    if(alex) cout << "Happy Alex\n";
    else cout << "Poor Alex\n";
    return 0;
}