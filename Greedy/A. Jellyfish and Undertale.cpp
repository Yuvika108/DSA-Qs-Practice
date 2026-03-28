#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
  int t;
  cin >> t;

  while (t--) {
    ll a, b, n;
    cin >> a >> b >> n;

    // a=maximum value of the bomb's timer, b=initial value of the timer of the
    // bomb, c=number of tools

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];

    ll max_time = b;
    for (int i = 0; i < n; i++) {
      max_time += min(v[i], a - 1);
    }

    cout << max_time << endl;
  }

  return 0;
}