#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, n, w;
  cin >> k >> n >> w;
  // k= cost of bananas, n= dollars soldier has, w=number of bananas

  long long total_cost = k * ((w * (w + 1)) / 2);
  long long borrowed_money = total_cost - n;

  if (borrowed_money > 0)
    cout << borrowed_money << endl;
  else
    cout << '0' << endl;

  return 0;
}