#include<bits/stdc++.h>
using namespace std;
int main()
{
    string current, operation;
    int i, t;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        stack<string> back;
        stack<string> forward;
        cout << "Case " << i << ":\n";
        current = "http://www.lightoj.com/";
        while(1)
        {
            cin >> operation;
            if(operation == "VISIT")
            {
                back.push(current);
                forward = stack<string>();
                cin >> current;
                cout << current << endl;
            }
            else if(operation == "BACK")
            {
                if(back.empty())
                {
                    cout << "Ignored\n";
                }
                else
                {
                    forward.push(current);
                    current = back.top();
                    back.pop();
                    cout << current << endl;
                }
            }
            else if(operation == "FORWARD")
            {
                if(forward.empty())
                {
                    cout << "Ignored\n";
                }
                else
                {
                    back.push(current);
                    current = forward.top();
                    forward.pop();
                    cout << current << endl;
                }
            }
            else if(operation == "QUIT") break;
        }
    }
    return 0;
}