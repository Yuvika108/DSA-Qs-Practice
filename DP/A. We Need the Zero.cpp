#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int t;
  cin >> t;

  while (t--) {
    // b=a+x
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];

    ll total_xor = 0;
    for (int i = 0; i < n; i++) {
      total_xor ^= v[i];
    }

    if (n % 2 != 0)
      cout << total_xor << endl;
    else {
      if (total_xor == 0)
        cout << total_xor << endl;
      else
        cout << -1 << endl;
    }
  }

  return 0;
}