#include <iostream>
using namespace std;

int main()
{
    int n, p, r, t;
    double d, best_compliance, best_cost, temp;
    string bestcompanyname, name, temps;
    for(t=1; ; t++)
    {
        scanf("%d %d\n", &n, &p);
        if(n == 0) break;
        if(t > 1) cout << endl;
        for(int i=0; i<n; i++) getline(cin, temps);
        best_compliance = 0.0;
        best_cost = 1.7976931348623157E+308;
        for(int i=0; i<p; i++)
        {
            getline(cin, name);
            scanf("%lf %d\n", &d, &r);
            for(int i=0; i<r; i++) getline(cin, temps);
            temp = (double) r/p;
            if(temp > best_compliance || (temp == best_compliance && d < best_cost))
            {
                best_compliance = temp;
                best_cost = d;
                bestcompanyname = name;
            }
        }
        cout << "RFP #" << t << endl;
        cout << bestcompanyname << endl;
    }
    return 0;
}
