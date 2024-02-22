#include<bits/stdc++.h>
using namespace std;
int main()
{
    int qt, i, pv1, pv2, add;
    string p1, p2, c1, c2;
    cin >> qt;
    for(i=0; i<qt; i++)
    {
        cin >> p1 >> c1 >> p2 >> c2;
        cin >> pv1 >> pv2;
        add = pv1 + pv2;
        if(add % 2 == 0)
        {
            if(c1 == "PAR")
            {
                cout << p1 << endl;
            }
            else if(c2 == "PAR")
            {
                cout << p2 << endl;
            }
        }
        else
        {
            if(c2 == "IMPAR")
            {
                cout << p2 << endl;
            }
            else if(c1 == "IMPAR")
            {
                cout << p1 << endl;
            }
        }
    }
    return 0;
}
