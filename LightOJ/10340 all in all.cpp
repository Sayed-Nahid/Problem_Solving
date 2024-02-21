#include<bits/stdc++.h>
using namespace std;
int main(){
    string oris, ens;
    int oril, enl, i, j, c;
    while(cin >> oris >> ens){
        oril=oris.length(), enl=ens.length(), c=0;
        for(i=0, j=0; j<enl&&c<oril; j++) if(oris[i]==ens[j]) i++, c++;
        if(c==oril) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}