#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;

  int b = s1.size();

  for (int i = 0; i < b; i++) {
    if (int(s1[i]) >= 65 && int(s1[i]) <= 91) {
      s1[i] += 32;
    }

    if (int(s2[i]) >= 65 && int(s2[i]) <= 91) {
      s2[i] += 32;
    }
  }

  int p = 0;

  if (s1 > s2)
    p = 1;
  if (s1 < s2)
    p = -1;

  cout << p << endl;

  return 0;
}