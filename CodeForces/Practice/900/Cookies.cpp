#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, sum, e, o, x;
    sum=e=o=i=0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> x;
        if(x&1) o++;
        else e++;
        sum+=x;
    }
    if(sum&1) cout << o << endl;
    else cout << e << endl;
    return 0;
}