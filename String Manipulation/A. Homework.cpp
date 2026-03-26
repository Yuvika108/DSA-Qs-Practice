#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n; // n = a.size()
    cin >> n;

    string a;
    cin >> a;

    int m; // m = b.size(), c.size()
    cin >> m;
    string b, c; // b.size()=c.size()
    cin >> b;
    cin >> c;

    // V ---> add characters to the beginning of the word
    // D ---> add characters to the end

    for (int i = 0; i < m; i++) {
      if (c[i] == 'V') {
        a.insert(a.begin(), b[i]);
      } else {
        a.push_back(b[i]);
      }
    }

    cout << a << endl;
  }

  return 0;
}