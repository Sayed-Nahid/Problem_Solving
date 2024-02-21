#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, row[8]={-2, -2, -1, -1, 1, 1, 2, 2}, col[8]={-1, 1, -2, 2, -2, 2, -1, 1}, standingr, standingc, nextr, nextc, i, count;
    string ch;
    cin >> t;
    while(t--)
    {
         string s;
         cin >> s;
        standingr = s[0]-'a';
        standingc = s[1]-'1';
        count = 0;
        for(i=0; i<8; i++)
        {
            nextr = row[i]+standingr;
            nextc = col[i]+standingc;
            if(nextr>=0 && nextr<8 && nextc >=0 && nextc<8) count++;
        }
        cout << count << endl;
    }
    return 0;
}