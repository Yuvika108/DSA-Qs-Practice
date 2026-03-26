#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k; // n=number of problems, k=maximum allowed absolute difference
              // between consecutive problems
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    sort(a.begin(), a.end());

    ll largest_length = 1;
    ll count = 1;

    for (int i = 1; i < n; i++) {
      if (a[i] - a[i - 1] <= k) {
        count++;
      } else
        count = 1;

      largest_length = max(largest_length, count);
    }

    cout << n - largest_length << endl;
  }

  return 0;
}