#include<bits/stdc++.h>
using namespace std;
int main(){
    int fn, rn, i, j;
    double maxs;
    while(cin >> fn && fn){
        cin >> rn;
        int f[fn], r[rn], in=0;
        double drive[fn*rn];
        for(i=0; i<fn; i++){
            cin >> f[i];
        }
        for(i=0; i<rn; i++){
            cin >> r[i];
        }
        for(i=0; i<fn; i++){
            for(j=0; j<rn; j++){
                drive[in]= (double)r[j]/(double)f[i];
                in++;
            }
        }
        sort(drive, drive+in);
        maxs = -1;
        for(i=0; i<in-1; i++)
            maxs = max(maxs, drive[i+1]/drive[i]);
        printf("%0.2lf\n", maxs);
    }
}