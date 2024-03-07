#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int a, c;
	int t;
	cin >> t;
	while(t--){
		cin >> a;
		long long int arr[a];
		for(auto &l:arr) cin >> l;
		sort(arr, arr+a);
	     c = count(arr, arr+a, 0);
		if(c==a) cout << "1\n";
		else if(a==3 && c > 0) cout << "0\n";
		else if(a-c > 0) cout << "1" << "\n";
		else cout << "0\n";
	}
	return 0;
}