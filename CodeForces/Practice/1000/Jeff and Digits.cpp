#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x, i, zero=0, five=0;
    cin >> n; 
    for(i=0; i<n; i++){
        cin >> x;
        if(x == 0) zero++;
        else five++;
    }
    if(zero == 0) cout << -1;
    else if(five<9) cout << 0;
    else{
         five /= 9;
         for(i=0; i<five; i++) cout << "555555555";
         for(i=0; i<zero; i++) cout << "0";
    }
    cout << "\n";
    return 0;
}