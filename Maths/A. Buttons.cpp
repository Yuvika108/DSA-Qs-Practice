#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;

    // First=Anna, Second=Katie

    if (c % 2 == 0) {
      if (a > b)
        cout << "First \n";
      else
        cout << "Second \n";
    }
    if (c % 2 != 0) {
      if (b > a)
        cout << "Second \n";
      else
        cout << "First \n";
    }
  }

  return 0;
}