#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, sum=0, val;
    for(i=0; i<4; i++)
    {
        scanf("%d", &val);
        sum += val;
    }
    cout << sum-3 << endl;
    return 0;
}
