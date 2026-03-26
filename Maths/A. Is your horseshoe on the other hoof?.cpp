#include <bits/stdc++.h>
using namespace std;

int main() {

  set<int> v;
  for (int i = 0; i < 4; i++) {
    int s;
    cin >> s;
    v.insert(s);
  }

  cout << 4 - v.size() << endl;

  return 0;
}