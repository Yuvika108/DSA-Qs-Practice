#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c;
  int a[5][5];
  // input = either 1 or 0

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> a[i][j];
      if (a[i][j] == 1) {
        r = i;
        c = j;
      }
    }
  }

  int moves = abs(r - 2) + abs(c - 2);

  cout << moves << endl;

  return 0;
}