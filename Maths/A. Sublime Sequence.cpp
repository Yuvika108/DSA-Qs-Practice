#include <bits/stdc++.h>
using namespace std;

int main() {

  int t; // t=test cases
  // cout << "t: ";
  cin >> t;

  while (t--) {
    int x, n;
    // cout << "x & n: ";
    cin >> x >> n;

    int sum = 0;

    for (int i = 0; i < n; i++) {
      sum += x;
      x = (-1) * x;
      // cout << x << " ";
    }
    cout << sum << endl;
  }

  return 0;
}