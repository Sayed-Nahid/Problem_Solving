#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size, i, j, col, row, depth;
    cin >> size;
    int arr[size][size];
    for(i=0; i<size; i++) for(j=0; j<size; j++) cin >> arr[i][j];
    row = 0;
    while(row < size)
    {
        col = 0;
        depth = row;
        while(depth >= 0)
        {
            cout << arr[depth][col] << ' ';
            depth--;
            col++;
        }
        row++;
    }
    col=1;
    while(col < size)
    {
        row = size-1;
        depth = col;
        while(depth < size)
        {
            cout << arr[row][depth] << ' ';
            row--;
            depth++;
        }
        col++;
    }
    return 0;
}