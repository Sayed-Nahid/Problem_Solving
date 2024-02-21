#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t, n, x, countone=0, subset=0, optimalsubset=-1, i;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> x;
        if(x==0) subset++;
        else subset--, countone++;
        if(subset>optimalsubset) optimalsubset=subset;
        if(subset<0) subset=0;
    }
    cout << countone+optimalsubset << endl;
    return 0;
}