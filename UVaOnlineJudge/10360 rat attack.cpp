#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, d, n, i, x, y, population, j, k, mx;
    cin >> t;
    while(t--){
        vector<vector<int>> city(1025, vector<int>(1025));
        cin >> d >> n;
        for(i=0; i<n; i++){
            cin >> x >> y >> population;
            for(j=(x-d); j<=x+d; j++){
                for(k=(y-d); k<=y+d; k++){
                    if(j>=0 && j<1025 && k>=0 && k<1025) city[j][k] += population;
                }
            }
        }
        mx=0, x=0, y=0;
        for(i=0; i<1025; i++){
            for(j=0; j<1025; j++){
                if(city[i][j]>mx){
                    mx=city[i][j];
                    x=i, y=j;
                }
            }
        }
        cout << x << " " << y << " " << mx << endl;
    }
    return 0;
}
