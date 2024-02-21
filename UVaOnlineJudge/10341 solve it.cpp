#include<bits/stdc++.h>
using namespace std;
int p, q, r, s, t, u;
double cal(double x){
     return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}

double solveit(){
    double l=0, h=1, m;
    while(l+(1e-7)<h){
        m = (l+h)/2.0;
        if(cal(l)*cal(m) <= 0) h=m;
        else l=m;
    }
    return (l+h)/2.0;
}

int main(){
    while(cin >> p >> q >> r >> s >> t >> u){
        if(cal(0)*cal(1)>0) cout << "No solution\n";
        else printf("%0.4lf\n", solveit());
    }
    return 0;
}