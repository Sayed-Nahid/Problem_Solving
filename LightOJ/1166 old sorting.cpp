#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, i, n, move, j, c, ans;
    cin >> t;
    for(j=1; j<=t; j++){
        cin >> n;
        int val[n+1]={};
        bool swaped[n+1]={};
        for(i=1; i<=n; i++) cin >> val[i];
        ans=0;
        for(i=1; i<=n; i++){
            move=i, c=0;
            if(!swaped[move]){
                while(!swaped[move]){
                    swaped[move]=true;
                    move=val[move];
                    c++;
                }
                ans+=(c-1);
            }
        }
        cout << "Case " << j << ": " << ans << endl;
    }
    return 0;
}
