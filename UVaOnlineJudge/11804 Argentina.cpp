#include<bits/stdc++.h>
using namespace std;
struct Player{
    string name;
    int a, d;
} p[11];

void Swap(int i, int j){
    Player temp = p[i];
    p[i] = p[j];
    p[j] = temp;
}
int main(){
    int t, j, k, numt;
    cin >> numt;
    for(t=1; t<=numt; t++){
        for(j=1; j<=10; j++) cin >> p[j].name >> p[j].a >> p[j].d;
         for(j=1; j<10; j++){
                for(k=j+1; k<=10; k++){
                    if(p[j].a < p[k].a) Swap(j, k);
                    else if(p[j].a == p[k].a){
                        if(p[j].d > p[k].d) Swap(j, k);
                        else if(p[j].d == p[k].d){
                            if((p[j].name.compare(p[k].name))>0) Swap(j, k);
                        }
                    }
                }
            }
            for(j=1; j<5; j++){
                for(k=j+1; k<=5; k++){
                    if((p[j].name.compare(p[k].name)) > 0) Swap(j, k);
                }
            }
            for(j=6; j<10; j++){
                for(k=j+1; k<=10; k++){
                    if((p[j].name.compare(p[k].name)) > 0) Swap(j, k);
                }
            }
        cout << "Case "<< t << ":\n";
        cout << "(" << p[1].name << ", " << p[2].name << ", " << p[3].name << ", " << p[4].name << ", " << p[5].name << ")\n";
        cout << "(" << p[6].name << ", " << p[7].name << ", " << p[8].name << ", " << p[9].name << ", " << p[10].name << ")\n";
    }
}