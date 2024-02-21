#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, n, j, c;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        int arr[n+1], c=0;
        arr[0]=2;
        for(j=1; j<=n; j++) cin >> arr[j];
        for(j=1; j<=n; j++) c+=(arr[j]-arr[j-1]+4)/5;
        cout << "Case " << i << ": " << c << endl;
    }
    return 0;
}