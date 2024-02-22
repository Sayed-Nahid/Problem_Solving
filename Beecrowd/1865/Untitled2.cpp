#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    int t, i, force;
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> name >> force;
        if((name[0] == 'T') && (name[1] == 'h') && (name[2] == 'o') && (name[3] == 'r'))
        {
            cout << 'Y' << endl;
        }
        else
        {
            cout << 'N' << endl;
        }
    }
    return 0;
}

