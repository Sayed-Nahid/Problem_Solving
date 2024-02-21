#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    map<string, int> store;
    string countryname, junk;
    cin >> t;
    getchar();
    while(t--)
    {
        cin >> countryname;
        getline(cin, junk);
        store[countryname] += 1;
    }
    map<string, int>::iterator i = store.begin();
    for(i; i != store.end(); i++)
    {
        cout << i->first << ' ' << i->second << endl;
    }
    return 0;
}
