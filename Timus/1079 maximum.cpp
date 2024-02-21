#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100000],i;
    arr[0] = 0;
    arr[1] = 1;
    for(i=1; i<=100000/2; i++)
    {
        arr[2*i] = arr[i];
        arr[2*i+1] = arr[i] + arr[i+1];
    }
    int t, maxval;
    while(cin >> t && t != 0)
    {
        maxval=0;
        for(i=0; i<=t; i++)  maxval = max(maxval, arr[i]);
        cout << maxval << endl;
    }
    return 0;
}