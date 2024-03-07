#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[14]={4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int x, i;
    bool f=false;
    cin >> x;
    for(i=0; i<14; i++){
        if(x%arr[i]==0){
            f=true;
            break; }
    }
    if(f) cout << "YES\n";
    else cout << "NO\n";
}