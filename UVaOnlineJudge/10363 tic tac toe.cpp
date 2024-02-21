#include<bits/stdc++.h>
using namespace std;
bool checker(vector<string> s, char ch)
{
    if(s[0][0]==ch && s[0][1]==ch && s[0][2]==ch) return false;
    if(s[1][0]==ch && s[1][1]==ch && s[1][2]==ch) return false;
    if(s[2][0]==ch && s[2][1]==ch && s[2][2]==ch) return false;
    if(s[0][0]==ch && s[1][0]==ch && s[2][0]==ch) return false;
    if(s[0][1]==ch && s[1][1]==ch && s[2][1]==ch) return false;
    if(s[0][2]==ch && s[1][2]==ch && s[2][2]==ch) return false;
    if(s[0][0]==ch && s[1][1]==ch && s[2][2]==ch) return false;
    if(s[0][2]==ch && s[1][1]==ch && s[2][0]==ch) return false;
    return true;
}


int main()
{
    int t, cx, co;
    cin >> t;
    while(t--)
    {
        vector<string> grid(3);
        cx=0; co=0;
        for(int i=0; i<3; i++)
        {
            cin >> grid[i];
            for(int c=0; c<3; c++)
            {
                if(grid[i][c]=='X') cx++;
                else if(grid[i][c]=='O') co++;
            }
        }
        bool valid;
        if(cx == co) valid=checker(grid, 'X');
        else if(cx == co+1) valid=checker(grid, 'O');
        else valid=false;
        if(valid) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}