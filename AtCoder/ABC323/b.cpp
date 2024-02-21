#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x, n, i, temp, j, in, c;
    string s;
    cin >> n;
    cin >> ws;
    int arr[n]={0};
    for(i=0; i<n; i++){
        cin >> s;
        c=0;
        for(j=0; j<n; j++){
            if(s[j]=='o') c++;
        }
        arr[i]=c;
    }
    for(i=0; i<n; i++){
        temp=arr[0];
        in = 0;
        for(j=1; j<n; j++){
            if(arr[j]>temp){ temp=arr[j]; in = j;}
        }
        arr[in] = -1;
        cout << in+1 << "\n";
    }
    return 0;
}