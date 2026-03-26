#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  int count = 0;

  for (char &ch : s) {
    if (ch == '4' || ch == '7') {
      count++;
    }
  }

  if (count == 4 || count == 7)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}