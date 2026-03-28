#include <iostream>
#include <vector>
using namespace std;

#define ll long long

int main() {
  int t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
      cin >> a[i];

    ll count = 0;
    for (ll i = 0; i < n - 1; i++) {
      if ((a[i] % 2) == (a[i + 1] % 2))
        count++;
    }

    cout << count << endl;
  }

  return 0;
}