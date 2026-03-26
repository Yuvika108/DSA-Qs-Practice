#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b;
  vector<int> v = {1, 2, 3};

  cin >> a >> b;

  for (int i = 0; i < 3; i++) {
    if (a != v[i] && b != v[i])
      cout << v[i];
  }
  cout << endl;

  return 0;
}