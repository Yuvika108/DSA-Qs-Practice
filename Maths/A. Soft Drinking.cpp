#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int amt_drink = k * l;
  int no_friends = n;
  int toast1 = amt_drink / nl;
  int toast2 = c * d;
  int toast3 = p / np;

  // cout << amt_drink << " ," << no_friends << endl;
  // cout << toast1 << " ," << toast2 << " ," << toast3 << endl;

  int result = min({toast1, toast2, toast3}) / n;

  cout << result << endl;

  return 0;
}