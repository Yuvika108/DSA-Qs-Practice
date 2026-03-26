#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
      cin >> v[i];

    sort(v.begin(), v.end());

    int max_value = v[n - 1];
    int min_value = v[0];

    if (max_value == min_value)
      cout << "NO \n";

    else {
      cout << "YES \n";
      cout << max_value << " ";
      for (int i = 0; i < n - 1; i++)
        cout << v[i] << " ";
      cout << endl;
    }
  }

  return 0;
}