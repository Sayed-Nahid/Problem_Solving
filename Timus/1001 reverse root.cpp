#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    stack<long long int> st;
    while(scanf("%lld", &x) != EOF)
    {
        st.push(x);
    }
    while(!st.empty())
    {
        cout << setprecision(4) << fixed << sqrt(st.top()) << endl;
        st.pop();
    }
    return 0;
}