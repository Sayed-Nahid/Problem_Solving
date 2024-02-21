#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, i, l, r, g;
  cin >> N >> M;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];
  sort(A.begin(), A.end());
  int mx = 0, x;
  for (i = 0; i < N; i++) {
    l = lower_bound(A.begin(), A.end(), x) - A.begin();
    r = upper_bound(A.begin(), A.end(), x + M) - A.begin();
    g = r - l;
    mx = max(mx, g);
  }
  cout << mx << endl;
  return 0;
}
