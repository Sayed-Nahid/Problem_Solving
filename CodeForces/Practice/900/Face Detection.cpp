#include<bits/stdc++.h>
using namespace std;
string s[51];
int main(){
    int x, y, i, j, c=0, test='a'*'c'*'e'*'f';
    cin >> x >> y;
    for(i=0; i<x; i++) cin >> s[i];
    for(i=0; i<x-1; i++){
        for(j=0; j<y-1; j++){
            if(s[i][j] * s[i][j+1] * s[i+1][j]* s[i+1][j+1]== test) c++;
        }
    }
    cout << c << endl;
    return 0;
}