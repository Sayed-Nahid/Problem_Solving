#include<iostream>
#include<set>
using namespace std;
int main()
{
    int t, n, i;
    string s, temp;
    cin >> t;
    while(t--)
    {
        cin >> n;
        set<string> st;
        cin >> ws;
        getline(cin, s);
        for(i=0; i<(n-1); i++)
        {
            temp = "";
            temp += s[i];
            temp += s[i+1];
            st.insert(temp);
        }
        cout << st.size() << endl;
    }
    return 0;
}