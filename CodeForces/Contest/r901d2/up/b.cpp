#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t, n, m, k, i, temp;
	cin >> t;
	while(t--){
		cin >> n >> m >> k;
		vector<int> j(n), g(m);
		for(auto &x: j) cin >> x;
		for(auto &y: g) cin >> y;
		sort(j.begin(), j.end());
		sort(g.begin(), g.end());
		if(k&1) k=min(k, (long long)1);
		else k=min(k, (long long)2);
		for(i=1; i<=k; i++){
			if(i&1){
				if(j[0] > g[m-1]) continue;
				swap(j[0], g[m-1]);
				sort(j.begin(), j.end());
				sort(g.begin(), g.end());
			}
			else{
				if(g[0] > j[n-1]) continue;
				swap(g[0], j[n-1]);
				sort(j.begin(), j.end());
				sort(g.begin(), g.end());
			}
		}
		cout << accumulate(j.begin(), j.end(), (long long)0) << endl;
	}
	return 0;
}