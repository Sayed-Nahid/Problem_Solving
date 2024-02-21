#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool check(string s){
    if(s=="blue"||s=="green"||s=="yellow"||s=="red"||s=="purple"||s=="orange"||s=="pink"||s=="grey"||s=="cyan"||s=="brown"||s=="ash"||s=="silver"||s=="gold"||s=="white"||s=="black") return true;
    else return false;
}

int main(){
    int t, len, i, j, k, ans, a;
    string s, temp, temp2;
    cin >> t;
    while(t--){
        cin >> s;
        ans=0;
        len = s.length();
        for(i=0; i<len; i++){
            temp=s[i];
            for(j=1; j<=len; j++){
                for(a=0; a<len; a++){
                    //if(i==a) continue;
                    temp2=temp;
                    for(k=0; k<j; k++){
                        temp2+=s[a];
                        if(check(temp2)) ans++;
                    }
                    temp2="";
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
