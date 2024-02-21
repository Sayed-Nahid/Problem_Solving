#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, i, j, c=0;
    cin >> n;
    vector<int> boy(n);
    for(i=0; i<n; i++) cin >> boy[i];
    sort(boy.begin(), boy.end());
    cin >> m;
    vector<int> girl(m);
    for(i=0; i<m; i++) cin >> girl[i];
    sort(girl.begin(), girl.end());
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(abs(boy[i]-girl[j])<=1){
                c++;
                girl[j]=420;
                break;
            }
        }
    }
    cout << c << "\n";
    return 0;
}