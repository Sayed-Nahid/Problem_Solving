#include<bits/stdc++.h>
using namespace std;
int main()
{
    int fval, sval;
    cin >> fval >> sval;
    if(fval == sval)
    {
        cout << fval << endl;
    }
    else if(fval > sval)
    {
        cout << fval << endl;
    }
    else if(sval > fval)
    {
        cout << sval << endl;
    }
    return 0;
}
