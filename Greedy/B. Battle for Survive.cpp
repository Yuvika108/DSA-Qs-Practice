#include <bits/stdc++.h>
using namespace std;

long long solution(vector<long long> &v, int n) {
  long long res = -1 * v[n - 2];
  for (int i = 0; i < n - 2; i++) {
    res += v[i];
  }
  res += v[n - 1];
  return res;
}

int main() {

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<long long> v;

    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      v.push_back(a);
    }
    cout << solution(v, n) << endl;
  }

  return 0;
}