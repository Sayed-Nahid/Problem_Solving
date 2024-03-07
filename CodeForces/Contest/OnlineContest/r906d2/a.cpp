#include<bits/stdc++.h>
#define sp(n) fixed << setprecision(n)
#define ll long long int
#define f(i, n) for(i; i<n; i++)
#define fr(n) for(i=n; i>=0; i--)
#define fill(arr, val) memset(arr, val, sizeof(arr))
using namespace std;
void cf(){
    int t, x, i, c;
    bool f;
    string s;
    cin >> t;
    while(t--){
        cin >> x;
        int arr[x];
        for(i=0; i<x; i++) cin >> arr[i];
        if(x <= 2) cout << "Yes\n";
        else{
            c=0;
            while(c != x-2){
                for(i=1; i<x-1; i++){
                    
                    if(arr[i]+arr[i-1] == arr[i]+arr[i+1]){
                        c++;
                        continue;
                    }
                    else break;
                }
                if(c == x-2) break;
                else {c=0;
                next_permutation(arr, arr+x);}
            }
            if(c==x-2) cout << "Yes\n";
            else cout << "No" << endl;
        }
        
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cf();
    return 0;
}
