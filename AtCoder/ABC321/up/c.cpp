#include<bits/stdc++.h>
using namespace std;
int main(){
    int k, i, j;
    long long int x;
    vector<long long int> arr;
    for(i=2; i<(1<<10); i++){
        x=0;
        for(j=9; j>=0; j--){
            if(i&(1<<j)){
                x*=10;
                x+=j;
            }
        }
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    cin >> k;
    cout << arr[k-1] << endl;
    return 0;
}