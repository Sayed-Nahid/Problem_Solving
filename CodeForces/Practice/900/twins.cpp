#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int n, i, c;
    ll p, sum=0;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++) cin >> arr[i], sum+=arr[i];
    sort(arr, arr+n, greater<int>());
    p=c=i=0;
    while(p<=(sum-p)){
        p+=arr[i];
        c++;
        i++;
    }
    cout << c << endl;
    return 0;
}