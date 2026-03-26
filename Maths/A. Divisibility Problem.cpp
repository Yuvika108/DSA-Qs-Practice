#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  long long a, b;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    if (a % b == 0)
      v[i] = 0;
    else
      v[i] = b - a % b;
  }

  for (const auto &i : v) {
    cout << i << endl;
  }

  return 0;
}