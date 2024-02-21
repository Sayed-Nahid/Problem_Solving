#include<bits/stdc++.h>
using namespace std;
int countdis(string s, int sz){
    int sm=INT_MAX;
    for(int i=0; i<sz-1; i++) sm = min(sm, abs((int)s[i] - (int)s[i+1]));
    return sm;
}

int main(){
    string s, ans, cs;
    while(getline(cin, s)){
        cs=s;
        int takemx=INT_MIN, i, dismn;
        int sz=s.size();
        dismn = countdis(s, sz);
        if(dismn > takemx){
            takemx = dismn;
            ans=s;
        }
        for(i=0; i<10; i++){
            prev_permutation(s.begin(), s.end());
            dismn=countdis(s, sz);
            if(dismn>takemx){
                takemx=dismn;
                ans=s;
            }
            if(dismn==takemx) ans = min(s, ans);
        }
        for(i=0; i<10; i++){
            next_permutation(cs.begin(), cs.end());
            dismn=countdis(cs, sz);
            if(dismn>takemx){
                takemx=dismn;
                ans=cs;
            }
            if(dismn == takemx) ans=min(cs, ans);
        }
        cout << ans << takemx << endl;
    }
    return 0;
}
