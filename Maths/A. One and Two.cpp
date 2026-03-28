#include <iostream>
using namespace std;
#define ll long long

int main() {
  int t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    ll v[n];
    for (ll i = 0; i < n; i++)
      cin >> v[i];

    ll total_count_2 = 0;
    ll current_count_2 = 0;

    for (ll i = 0; i < n; i++) {
      if (v[i] == 2)
        total_count_2++;
    }

    ll ans = -1;

    for (ll i = 0; i < n; i++) {
      if (v[i] == 2)
        current_count_2++;
      if ((current_count_2) == (total_count_2 - current_count_2)) {
        ans = i + 1;
        break;
      }
    }

    cout << ans << endl;
  }

  return 0;
}