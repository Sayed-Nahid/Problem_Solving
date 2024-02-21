#include<bits/stdc++.h>
using namespace std;
int numw, numr;
string words[100], rule, num[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"}, pass[300];
void makepass(int pos){
    int i;
    if(pos == rule.size()){
        for(i=0; i<pos; i++) cout << pass[i];
        cout << "\n";
    }
    else{
        if(rule[pos]=='#'){
            for(i=0; i<numw; i++){
                pass[pos]=words[i];
                makepass(pos+1);
            }
        }
        else{
            for(i=0; i<10; i++){
                pass[pos]=num[i];
                makepass(pos+1);
            }
        }
    }
}

int main(){
    int d, i, p, a, b, c;
    while(cin >> numw){
        for(i=0; i<numw; i++) cin>>words[i];
        cout << "--\n";
        cin >> numr;
        for(i=0; i<numr; i++){
            cin >> rule;
            makepass(0);
        }
    }
    return 0;
}