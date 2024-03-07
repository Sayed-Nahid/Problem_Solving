#include<bits/stdc++.h>
using namespace std;
int main(){
    int  t, i, row, col, op, r, sum, j;
    char s;
    cin >> t;
    
    while(t--){
        sum=0;
        for(i=1; i<=10; i++){
            for(j=1; j<=10; j++){
                cin >> ws;
                scanf("%c", &s);
                if(s=='X'){
                    if(i==1 || j==1 || i==10 || j==10 ) sum+=1;
                    else if((i==2 && (j>=2 && j<=9)) || (i==9 && (j>=2 && j<=9)) || (j==2 && (i>=2 && i<=9)) || (j==9 && (i>=2 && i<=9))) sum+=2;
                    else if((i==3 && (j>=3 && j<=8)) || (i==8 && (j>=3 && j<=8)) || (j==3 && (i>=3 && i<=8)) || (j==8 && (i>=3 && i<=8))) sum+=3;
                    else if((i==4 && (j>=4 && j<=7)) || (i==7 && (j>=4 && j<=7)) || (j==4 && (i>=4 && i<=7)) || (j==7 && (i>=4 && i<=7))) sum+=4;
                    else sum+=5;
                }
            }
        }
        
        cout << sum << endl;
    }
    return 0;
}