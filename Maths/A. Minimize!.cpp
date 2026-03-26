#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  int a, b, c;
  int r[t];
  for (int i = 0; i < t; i++) {
    cin >> a >> b;
    r[i] = (c - a) + (b - c);
  }

  for (int i = 0; i < t; i++) {
    cout << r[i] << endl;
  }

  return 0;
}