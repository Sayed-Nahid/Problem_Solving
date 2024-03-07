#include<bits/stdc++.h>
using namespace std;
int main(){
    int sh, eh, sm, em;
    scanf("%d : %d", &eh, &em);
    scanf("%d : %d", &sh, &sm);
    if(eh==0 && sh!=0) eh=24;
    if(em<sm) eh-=1, em+=60;
    if(eh<sh) eh+=24;
    if(eh-sh<10) cout << 0;
    cout << eh-sh << ":";
    if(em-sm<10) cout << 0;
    cout << em-sm << "\n";
    return 0;
}