#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, index, min=2147483647, temp;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> temp;
        if(temp < min)
        {
            min = temp;
            index = i;
        }
        else if(temp == min)
        {
            index = -1;
        }
    }
    if(index != -1) cout << index << endl;
    else cout << "Still Rozdil\n";
    return 0;
}