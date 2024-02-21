#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, i, ans(0), j;
    int pnum[3001]={0};
    bool pcheck[3001]={false};
    cin >> n;
    for(i=2; i<=n; i++){
        if(!pcheck[i]){
            for(j=i+i; j<=n; j+=i){
                pcheck[j]=true;
                pnum[j]++;
            }
        }
        if(pnum[i] == 2) ans++;
    }
    cout << ans << endl;
    return 0;
}