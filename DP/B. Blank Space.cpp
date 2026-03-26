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
    for (int i = 0; i < n; i++)
      cin >> v[i];

    ll count_zeroes = 0;
    ll max_length = 0;

    for (int i = 0; i < n; i++) {
      if (v[i] == 0)
        count_zeroes++;
      else
        count_zeroes = 0;

      max_length = max(max_length, count_zeroes);
    }

    cout << max_length << endl;
  }

  return 0;
}