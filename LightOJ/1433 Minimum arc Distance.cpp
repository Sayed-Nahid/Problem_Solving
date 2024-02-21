#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, ox, oy, ax, ay, bx, by;
    double r, thita, oa, ob, ab;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> ox >> oy >> ax >> ay >> bx >> by;
        oa = sqrt(pow((ox-ax), 2) + pow((oy-ay), 2));
        ob = sqrt(pow((ox-bx), 2) + pow((oy-by), 2));
        ab = sqrt(pow((ax-bx), 2) + pow((ay-by), 2));
        thita = acos((oa*oa + ob*ob - ab*ab)/(2*oa*ob));
        cout << "Case " << i << ": " <<  fixed << setprecision(8)  << oa*thita << endl;
    }
    return 0;
}