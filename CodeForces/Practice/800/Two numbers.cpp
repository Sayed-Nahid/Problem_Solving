#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y, floar;
    float round;
    cin >> x >> y;
    floar = x/y;
    round = x/(float)y;
    cout << "floor " << x << " / " << y << " = " << floar << endl;
    cout << "ceil " << x << " / " << y << " = " << floar+1 << endl;
    if(round-floar >= 0.5) floar++;
    cout << "round " << x << " / " << y << " = " << floar << endl;
    return 0;
}