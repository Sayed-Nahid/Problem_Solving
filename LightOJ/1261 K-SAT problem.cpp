#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, i, n, m, k, p, cs, j, wish;
    bool exist, notexist, stop, flag;
    cin >> t;
    for(cs=1; cs<=t; cs++){
        cin >> n >> m >> k;
        flag=true;
        int arr[n][k];
        for(i=0; i<n; i++) for(j=0; j<k; j++) cin >> arr[i][j];
        cin >> p;
        int sol[p];
        for(i=0; i<p; i++) cin >> sol[i];
        for(i=0; i<n; i++){
            stop=false;
            for(j=0; j<k && !stop; j++){
                wish = arr[i][j];
                exist=false;
                notexist=true;
                for(int a=0; a<p; a++){
                    if(abs(wish) == sol[a]){
                        exist=true;
                        notexist=false;
                    }
                }
                if(wish<0 && notexist) stop=true;
                if(wish>0 && exist) stop=true;
            }
            if(stop == false) flag=false;
        }
        if(flag) cout << "Case " << cs << ": Yes\n";
        else cout << "Case " << cs << ": No\n";
    }
    return 0;
}