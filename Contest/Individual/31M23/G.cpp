#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, len, flag=0, j;
    cin >> s;
    len = s.length();
    sort(s.begin(), s.end());
    for(i=0; i<len; i++)
    {
        if(s[i]>='1' && s[i]<='3')
        {
            if(flag == 0){ cout << s[i]; flag=1;}
            else cout << "+" << s[i];
        }
    }
    cout << endl;
    return 0;
}