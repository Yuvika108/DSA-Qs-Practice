#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, a, b;
    cin >> n >> a >> b;

    if ((b % 2) != (n % 2))
      cout << "NO" << endl;
    else if (a <= b)
      cout << "YES" << endl;
    else if ((a % 2) == (n % 2))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}