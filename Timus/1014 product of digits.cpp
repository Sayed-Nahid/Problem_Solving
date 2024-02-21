#include<bits/stdc++.h>
using namespace std;
int arrprime[35000]={0};
int prime(int n)
{
    int arr[n]={0}, p=-1, i, j;
    for(i=2; i<=sqrt(n); i++) 
    {                         
        if(arr[i] == 0)
        {
            p++;
            arrprime[p] = i;
            for(j=i*i; j<=n; j+=i) 
            {                      
                arr[j] = 1;
            }
        }
    }
    return p;
}

int main()
{
    int n, i, sum=0, len;
    bool flag=false;
    cin >> n;
    len = prime(n);
    for(i=0; i<=sqrt(n); i++)
    {
        if(n%arrprime[i] == 0)
        {
            sum = arrprime[i] + n/arrprime[i];
            if(n == sum)
            {
                flag = true;
                break;
            }
        }
    }
    if(flag) cout << arrprime[i] << n/arrprime[i] << endl;
    else cout << -1 << endl;
    return 0;
}