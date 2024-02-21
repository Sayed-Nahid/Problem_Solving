#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, i, x, j, temp=0;
    cin >> n >> m;
    int arr[n]={0};
    for(i=1; i<=m; i++){
        cin >> x;
        arr[x-1]=x;
        for(j=temp; j<(x-1); j++){
            if(arr[j]==0) cout << x-1-j << endl;
            else break;
        }
        cout << 0 << endl;
        temp=x;
    }
    
    return 0;
}