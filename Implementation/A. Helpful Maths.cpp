#include <bits/stdc++.h>
using namespace std;

int main() {

  string s1;
  cin >> s1;

  vector<char> v;
  for (char n : s1) {
    if (n != '+') {
      v.push_back(n);
    }
  }

  sort(v.begin(), v.end());

  string s2;
  for (size_t i = 0; i < v.size(); i++) {
    s2 += v[i];
    if (i < v.size() - 1) {
      s2 += '+';
    }
  }

  cout << s2 << endl;

  return 0;
}