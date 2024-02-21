#include<bits/stdc++.h>
using namespace std;
int main(){
    int cno, n, m, t, i, trip, time;
    cin >> cno;
    while(cno--){
        cin >> n >> t >> m;
        int arr[m];
        trip=time=0;
        for(i=0; i<m; i++) cin >> arr[i];
        if(n>m) trip=1, time=arr[m-1]+t;
        else if(m%n==0){
            for(i=n-1; i<m; i+=n){
                time=max(time, arr[i]);
                time += t*2;
            }
            time -= t, trip=m/n;
        }
        else{
            int remain=m%n;
            time=arr[remain-1]+(2*t);
            for(i=(remain+n-1); i<m; i+=n){
                time=max(time, arr[i]);
                time += t*2;
            }
            time -= t, trip=(m/n)+1;
        }
        cout << time << " " << trip << "\n";
    }
    return 0;
}