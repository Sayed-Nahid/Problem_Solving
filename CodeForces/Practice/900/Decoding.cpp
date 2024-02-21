#include<bits/stdc++.h>
using namespace std;
int main(){
    int size, m, l, r;
    cin >> size;
    cin >> ws;
    string s, decodeds;
    char temp;
    cin >> s;
        for(int i=0; i<size; i++){
            if((size-i)&1) decodeds+=s[i];
            else decodeds=s[i]+decodeds;
        }
    cout << decodeds << endl;
    return 0;
}