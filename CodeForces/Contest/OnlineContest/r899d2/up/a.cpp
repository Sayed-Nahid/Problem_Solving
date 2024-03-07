#include<bits/stdc++.h>
#define f(n) for(i=0; i<n; i++)
#define ci cin >>
#define co cout <<
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, n, i, start;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        f(n) ci arr[i];
        if(arr[0]==1) start=2;
        else start=1;
        for(i=1; i<n; i++){
            start++;
            if(arr[i]==start) start++;
        }
        co start << endl;
    }
    return 0;
}