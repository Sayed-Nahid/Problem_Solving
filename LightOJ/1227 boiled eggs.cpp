#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, n, p, q, sum, c;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n >> p >> q;
        sum=0, c=0;
        int arr[n];
        for(j=0; j<n; j++) cin >> arr[j];
        for(j=0; j<n; j++)
        {
            if(q >= (arr[j]+sum))
            {
                sum += arr[j];
                c++;
                if(p == c) break;
            }
            else break;
        }
        cout << "Case " << i << ": " << c << endl;
    }
    return 0;
}