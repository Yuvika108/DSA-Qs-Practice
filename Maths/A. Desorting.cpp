#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];

    long long operations = INT_MAX;

    for (int i = 0; i < n - 1; i++) {
      if (v[i] <= v[i + 1]) {
        long long d = v[i + 1] - v[i];
        long long required_operations = d / 2 + 1;
        operations = min(operations, required_operations);
      } else {
        operations = 0;
      }
    }
    cout << operations << endl;
  }

  return 0;
}