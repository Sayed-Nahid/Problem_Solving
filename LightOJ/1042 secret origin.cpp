#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, n, sum, p, j, size;
    vector<int> v;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        
        cin >> n;
        v.clear();
        while(n>=2)
        {
            v.push_back(n%2);
            n/=2;
        }
        v.push_back(n);
        v.push_back(0);
        reverse(v.begin(), v.end());
        next_permutation(v.begin(), v.end());
        sum=0; 
        size = v.size();
        p=size-1;
        for(j=0; j<size; j++)
        {
            if(v[j] != 0)
            {
                sum+= (int)(pow(2, p));
            }
            p--;
        }
        cout << "Case " << i << ": " << sum << endl;
    }
    return 0;
}