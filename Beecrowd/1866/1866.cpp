#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, i, x;
    cin >> test;
    for(i=0; i<test; i++)
    {
        cin >> x;
        if(x%2 == 0)
        {
            cout << '0' <<endl;
        }
        else
        {
            cout << '1' << endl;

        }
    }
    return 0;
}
