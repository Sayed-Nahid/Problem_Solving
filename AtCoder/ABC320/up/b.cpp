#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool palindrome(string s){
    string temp = s;
    reverse(temp.begin(), temp.end());
    if(s == temp) return true;
    else return false;
}

int main(){
    string s, temp;
    int i, j, k, len, ans=1;
    cin >> s;
    len = s.length();
    for(i=0; i<len; i++){
        for(j=i+1; j<=len; j++){
            temp = "";
            for(k=i; k<j; k++) temp += s[k];
            if(palindrome(temp)) ans = max(ans, j-i);
        }
    }
    cout << ans << endl;
    return 0;
}