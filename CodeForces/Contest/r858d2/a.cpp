#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d, count, i;
    bool flag;
    cin >> t;
    while(t--)
    {
        count = 0;
        cin >> a >> b >> c >> d;
            if(d < b) {
                cout << "-1\n";
                continue;
            }
            int aa=a+d-b;
            if(aa < c)
            {
                cout << "-1\n";
                continue;
            }
            
                i = (d - b)+abs(aa-c);
                
                    cout << i << endl;
            
        }
    
    return 0;
}