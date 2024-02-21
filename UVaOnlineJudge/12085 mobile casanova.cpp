#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, t=1, sequence, start, end, mod;
    while(cin >> n, n){
        int arr[n+2]={0};
        for(i=0; i<n; i++) cin >> arr[i];
        cout << "Case " << t++ << ":\n";
        for(i=0; i<n; i++){
            if(arr[i]+1 != arr[i+1]) cout << '0' << arr[i] << endl;
            else{
                cout << '0' << arr[i] << '-';
                sequence = i+1;
                for(; arr[sequence]+1 == arr[sequence+1]; ++sequence);
                start = arr[i];
                end = arr[sequence];
                mod = 10;
                while(start-(start%mod) != end-(end%mod)) mod *=10;
                cout << end%mod << endl;
                i = sequence; 
            }
        }
        cout << endl;
    }
    return 0;
}