// Problem: https://www.hackerrank.com/challenges/prettyprint/problem?isFullScreen=true
// Resource: https://www.geeksforgeeks.org/manipulators-in-c-with-examples/


#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        cout << left << hex << showbase << nouppercase << (long)A << endl;
        cout << setw(15) << right << showpos << setfill('_') << fixed << setprecision(2) << B << endl;
        cout << scientific << uppercase << setprecision(9) << noshowpos << C << endl;
		/* Enter your code here */

	}
	return 0;

}