#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int t;
  cin >> t;

  while (t--) {
    // n= length of a & b
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];

    for (int i = 0; i < n; i++) {
      cout << n + 1 - v[i] << " ";
    }
    cout << endl;
  }
  return 0;
}