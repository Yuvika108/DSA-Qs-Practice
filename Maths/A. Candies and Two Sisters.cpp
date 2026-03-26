#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  long long count = 0;

  vector<long long> v;
  while (t--) {
    long long n;
    cin >> n;
    if (n < 3) {
      count = 0;
    }
    if (n >= 3) {
      count = (n - 1) / 2;
    }
    v.push_back(count);
  }

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << endl;
  }

  return 0;
}