#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    // 1st ---> Vanya, 2nd ---> Vova

    if (n % 3 == 0)
      cout << "Second" << endl;
    else
      cout << "First" << endl;
  }

  return 0;
}