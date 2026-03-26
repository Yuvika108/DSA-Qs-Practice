#include <bits/stdc++.h>
using namespace std;

int gold(const vector<int> &v, int k) {
  int robin_gold = 0;
  int people_gold = 0;

  for (int gold : v) {
    if (gold >= k)
      robin_gold += gold;
    else if (gold == 0 && robin_gold > 0) {
      robin_gold--;
      people_gold++;
    }
  }
  return people_gold;
}

int main() {
  int t;
  cin >> t;

  vector<int> r;

  for (int i = 0; i < t; i++) {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    int result = gold(v, k);

    r.push_back(result);
  }

  for (int i = 0; i < r.size(); i++) {
    cout << r[i] << endl;
  }

  return 0;
}