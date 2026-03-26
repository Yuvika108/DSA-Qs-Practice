#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n; // n=no. of juices

  vector<int> v;
  for (int i = 0; i < n; i++) {
    int p; // p=orange juice %
    cin >> p;
    v.push_back(p);
  }

  double count = 0;
  for (int i = 0; i < v.size(); i++) {
    count = count + v[i];
  }

  // cout << count << endl;
  cout << count / n << endl;

  return 0;
}