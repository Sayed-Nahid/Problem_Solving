#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, cno;
    double x, y, c, ans;
    cin >> t;
    for(cno=1; cno<=t; cno++){
        cin >> x >> y >> c;
        double l=0.0, h=max(x, y), m, temp, ter=1e-10, ll, lr;
        while(h-l>ter){
            m = l+(h-l)/2.0;
            ll = sqrt((x*x)-(m*m));
            lr = sqrt((y*y)-(m*m));
            temp = (ll*lr)/(ll+lr);
            if(temp>c) l=m;
            else h=m;
        }
        printf("Case %d: %0.6lf\n", cno, m);
    }
    return 0;
}