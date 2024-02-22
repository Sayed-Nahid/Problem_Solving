#include <iostream>
using namespace std;
int main()
{
    int test, i;
    cin >> test;
    string name;
    for(i=0; i<test; i++)
    {
        getline(cin, name);
        if(name[0] == 'T')
        {
            cout << 'T' << endl;
        }
        else
        {
            cout << 'N' << endl;
        }

    }
    return 0;
}


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name[100];
    int test, i;
    cin >> test;
    for(i=0; i<test; i++)
    {
        cin >> name;
            //scanf("%s", name);
        if((name[0] =='T') && (name[1] == 'h') && (name[2] == 'o') && (name[3] == 'r'))
        {
            cout << 'Y' << endl;
        }
        else
        {
            cout << 'N' << endl;
        }
    }
    return 0;
}*/
