#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (i % 2 == 0)
        cout << "#";
      else {
        if (count % 2 != 0 && j == 0) {
          cout << "#";
          // count++;
        } else if (count % 2 == 0 && j == m - 1) {
          cout << "#";
          // count++;
        } else
          cout << ".";
      }
    }
    if (i % 2 != 0)
      count++;
    cout << endl;
  }
  cout << endl;

  return 0;
}