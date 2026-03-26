#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<char> v(n);
    for (int i = 0; i < n; i++)
      v[i] = s[i];

    int sum = 0;

    for (int i = 0; i < n; i++) {
      if (i + 2 < n && v[i] == '.' && v[i + 1] == '.' && v[i + 2] == '.') {
        sum = 2;
        break;
      }
      if (v[i] == '.')
        sum++;
    }

    cout << sum << endl;
  }

  return 0;
}