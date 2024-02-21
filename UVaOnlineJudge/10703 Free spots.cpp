#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w, h, n, x1, y1, x2, y2, y, x, count;
    while(cin >> w >> h >> n && w)
    {
        bool arr[500][500]={false};
        while(n--)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            if(x1 > x2) swap(x1, x2);
            if(y1 > y2) swap(y1, y2);
            for(y=y1-1; y<y2; y++)
            {
                for(x=x1-1; x<x2; x++) arr[y][x] = true;
            }
        }
        count = 0;
        for(y=0; y<h; y++)
        {
            for(x=0; x<w; x++)
            {
                if(!arr[y][x]) count++;
            }
        }
        if(!count) cout << "There is no empty spots.\n";
        else if(count == 1) cout << "There is one empty spot.\n";
        else cout << "There are " << count << " empty spots.\n";
    }
    return 0;
}