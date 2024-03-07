#include<bits/stdc++.h>
#define ll long long int
#define e endl;
using namespace std;
int main(){
    int t, n, i, j;
    string s;
    cin >> s;
    n=s.length();
    for(i=0; i<n; i++) cout << s[i] << " \n"[i==n-1];
    return 0;
}