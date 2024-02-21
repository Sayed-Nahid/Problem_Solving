#include <bits/stdc++.h>
using namespace std;

int main (){
    int t, x, temp, in, i;
    cin >> t;
    while(t--)
    {
        cin >> x;
        int arr[10]={0};
        while(x >= 0)
        {
            temp = x;
            while(temp != 0)
            {
                in = temp%10;
                arr[in]++;
                temp /= 10;
            }
            x--;
        }
        for(i=0; i<10; i++)
        {
            if(i == 0) cout << arr[i];
            else cout << ' ' << arr[i];
        }
        cout << endl;
    }
    return 0;
}
