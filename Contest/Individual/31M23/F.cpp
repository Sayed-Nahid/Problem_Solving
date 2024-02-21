#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, temp=1, x;
    long long int sum=0;
    cin >> n >> m;
    for(i=0; i<m; i++)
    {
        cin >> x;
        if(x >= temp)
        {
            sum += x - temp;
        }
        else
        {
            sum += (n - temp);
            sum += x;
        }
        temp = x; 
    }
    cout << sum << endl;
    return 0;
}