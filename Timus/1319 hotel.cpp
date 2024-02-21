#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size, col, row, depth, val=1, i, j;
    cin >> size;
    int arr[size][size];
    row=0;
    while(row < size)
    {
        col = 0;
        depth = row;
        while(depth >= 0)
        {
            arr[depth][col] = val;
            val++;
            depth--;
            col++;
        }
        row++;
    }
    col=1;
    while(col < size)
    {
        depth = col;
        row = size-1;
        while(depth < size)
        {
            arr[row][depth] = val;
            val++;
            depth++;
            row--;

        }
        col++;
    }
    for(i=0; i<size; i++){
        for(j=(size-1); j>=0; j--){
            if(j == 0) cout << arr[j][i];
            else cout << arr[j][i] << ' ';
        }
        cout << endl;
        }
    return 0;
}