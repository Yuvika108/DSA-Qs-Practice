#include <bits/stdc++.h>
using namespace std;

int main() {

  int x1, x2, x3;
  cin >> x1 >> x2 >> x3;

  int a[3] = {x1, x2, x3};

  sort(a, a + 3);

  int displacement = (a[1] - a[0]) + (a[2] - a[1]);

  cout << displacement << endl;

  return 0;
}