#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, a, b, c, i, rem;
    cin >> t;
    while(t--){
        cin >> n;
        for(a=2; a*a<=n; a++){
            if(n%a == 0){
                rem=n/a;
                break;
            }
        }
        for(b=a+1; b*b<=rem; b++){
            if(rem%b==0){
                c=rem/b;
                if(c <= b) c=0;
                break;
            }
        }
        if(a*b*c == n) cout << "YES\n" << a << " " << b << " " << c << endl;
        else cout << "NO\n";
    }
    return 0;
}