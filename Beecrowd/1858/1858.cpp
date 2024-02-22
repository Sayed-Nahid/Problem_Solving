#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size], i, temp, index=0;
    for(i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    temp = arr[0];
    for(i=1; i<size; i++)
    {
        if(temp > arr[i])
        {
            temp = arr[i];
            index = i;
        }
    }
    cout << index+1 << endl;
    return 0;
}
