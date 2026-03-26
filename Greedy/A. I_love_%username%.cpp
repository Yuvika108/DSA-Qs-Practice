#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  vector<int> v;
  for (int i = 0; i < t; i++) {
    int s;
    cin >> s;
    v.push_back(s);
  }

  int count = 0;
  int best_value = v[0];
  int worst_value = v[0];

  for (int j = 0; j < v.size(); j++) {
    if (v[j] > best_value) {
      count++;
      best_value = v[j];
    }
    if (v[j] < worst_value) {
      count++;
      worst_value = v[j];
    }
  }

  cout << count << endl;

  return 0;
}