#include<bits/stdc++.h>
#define sp(n) fixed << setprecision(n)
#define ll long long int
#define f(i, n) for(i; i<n; i++)
#define fr(n) for(i=n; i>=0; i--)
#define fill(arr, val) memset(arr, val, sizeof(arr))
using namespace std;
bool check(int a[], int l){
    int ans=a[0];
    for(int i=1; i<l; i++){
        ans = (ans|a[i]);
    }
    if(ans&1) return true;
    else return false;
}


void cf(){
    int t, x, i, n, d, ans, l, r, s, c;
    bool f;
    cin >> t;
    while(t--){
        cin >> n >> l;
        int arr[n], a[l];
        for(i=0; i<n; i++) cin >> arr[i];
        r=n+1-l, s=c=0;
        while(r--){
            a[l]={0};
            for(i=0; i<l; i++){
                a[i]=arr[s+i];
            }
            //for(i=0; i<l; i++) cout << a[i] << " ";
            //cout << endl;
            f = check(a, l);
            if(f) c++;
            s++;
        }
        cout << c << endl;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cf();
    return 0;
}
