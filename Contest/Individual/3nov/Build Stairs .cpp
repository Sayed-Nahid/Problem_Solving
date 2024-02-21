#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, temp;
    cin >> n;
    int arr[n];
    bool f=true;
    for(i=0; i<n; i++) cin >> arr[i];
    temp = arr[0];
    for(i=1; i<n; i++){
        if(arr[i]==temp) continue;
        else if(arr[i]>temp) temp = arr[i]-1;
        else{f=false; break;}
    }
    if(f) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}