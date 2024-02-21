#include <iostream>
using namespace std;

int main()
{
    int x, y, ans, i, c, val;
    while(cin >> x >> y)
    {
        cout << x << ' ' << y << ' ';
        ans = 0;
        if(x > y) swap(x, y);
        for(i=x; i<=y; i++)
        {
            c = 1;
            val = i;
            while(val > 1)
            {
                if(val%2) val = (3*val)+1;
                else val /= 2;
                c++;
            }
            if(c > ans) ans = c;
        }
        cout << ans << endl;
    }
    return 0;
}
