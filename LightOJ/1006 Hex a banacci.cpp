#include<bits/stdc++.h>
using namespace std;
long long int arr[10000];
int main()
{
    int t, i, n, j;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] >> n;
        for(j=6; j<=n; j++)
        {
            arr[j] = (arr[j-1]+arr[j-2]+arr[j-3]+arr[j-4]+arr[j-5]+arr[j-6])%10000007;
        }
        cout << "Case " << i << ": " << arr[n]%10000007 << endl;
    }
    return 0;
}