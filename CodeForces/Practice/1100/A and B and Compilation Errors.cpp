#include<bits/stdc++.h>
using namespace std;
int arr[100001];
int main(){
    int n, i, j, a=0, b=0, c=0, x;
    cin >> n;
    for(i=0; i<n; i++) {cin >> x; a+=x;}
    for(i=0; i<n-1; i++){cin >> x; b+=x;}
    for(i=0; i<n-2; i++){cin >> x; c+=x;}
    cout << a-b << "\n" << b-c << endl;
    return 0;   
}