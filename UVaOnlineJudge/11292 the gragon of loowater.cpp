#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, i, sum, j;
    bool flag;
    while(cin >> n >> m && n){
        int arrd[n], arrk[m];
        for(i=0; i<n; i++) cin >> arrd[i];
        for(i=0; i<m; i++) cin >> arrk[i];
        sort(arrd, arrd+n);
        sort(arrk, arrk+m);
        flag=true;
        sum=0, j=0;
        for(i=0; i<n && flag; i++){
            while(j<m && arrk[j]<arrd[i]) j++;
            if(j == m) flag=false;
            else sum+=arrk[j++];
        }
        if(!flag) cout << "Loowater is doomed!\n";
        else cout << sum << endl;

    }
    return 0;
}
