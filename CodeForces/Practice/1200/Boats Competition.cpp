#include <bits/stdc++.h>

using namespace std;

int main() {

	
	int t;
	cin >> t;
	while (t--) {
		int n, i, j;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
        sort(v.begin(), v.end());
		int ans = INT_MIN;
		for(int s=1; s<=100; s++){
            int c=0;
            for(i=0, j=n-1; i<j;){
                if(v[i]+v[j]>s) j--;
                else if(v[i]+v[j]<s) i++;
                else c++,i++, j--;
            }
            ans = max(ans, c);
        }
		cout << ans << endl;
	}
	
	return 0;
}