#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;

  vector<ll> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  ll min_operation = LLONG_MAX;

  for (int i = 0; i < n; i++)
    min_operation = min(min_operation, abs(v[i]));

  cout << min_operation << endl;

  return 0;
}