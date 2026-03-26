#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(ll &n, ll &m) {

  vector<ll> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());
  ll MAX = v[n - 1];

  for (int i = 0; i < m; i++) {
    char c;
    int l, r;
    cin >> c >> l >> r;

    if (c == '+') {
      if (MAX >= l && MAX <= r)
        MAX++;
    } else {
      if (MAX >= l && MAX <= r)
        MAX--;
    }
    cout << MAX << " ";
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    ll n, m;
    cin >> n >> m;

    solve(n, m);
  }

  return 0;
}