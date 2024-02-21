#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, m, s, cspeed=0, ptime=0, currenttime, ttime;
    double distance=0, distancetraveled;
    char ch1, ch2;cout << setprecision(2) << fixed << setfill('0');
    while(cin >> h >> ch1 >> m >> ch2 >> s)
    {
        currenttime = (h*3600)+(m*60)+s;
        ttime = currenttime - ptime;
        distancetraveled = cspeed * (ttime/3600.0);
        if(cin.peek() == ' ')
        {
            distance += distancetraveled;
            ptime = currenttime;
            cin >> cspeed;
        }
        else
        {
            cout << setw(2) << h << ':' << setw(2) << m << ':' << setw(2) << s << ' ' << distance + distancetraveled << " km\n";
        }
    }
    return 0;
}
