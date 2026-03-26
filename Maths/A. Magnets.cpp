#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, s;
  cin >> n;

  vector<int> v;
  for (int i = 0; i < n; i++) {
    cin >> s;
    v.push_back(s);
  }

  int count = 0;
  for (int i = 1; i <= v.size(); i++) {
    if (v[i] != v[i - 1])
      count++;
  }
  cout << count << endl;

  return 0;
}