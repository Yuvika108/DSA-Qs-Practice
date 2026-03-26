#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  cin >> t;

  while (t--) {
    long long n, q;
    // n=length of the array, q=number of queries.
    cin >> n >> q;
    vector<long long> a(n), pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      pref[i + 1] = pref[i] + a[i];
    }

    long long sum = 0;
    for (int i = 0; i < n; i++)
      sum += a[i];

    while (q--) {
      long long l, r, k;
      cin >> l >> r >> k;
      // 1<=l<=r<=n; 1<=k<=10^9
      int m = r - l + 1;

      long long diff = pref[r] - pref[l - 1];
      long long ans = sum - diff + (k * m);

      /*
      cout << "sum: " << sum << ", ";
      cout << "diff: " << diff << ", ";
      cout << "k*m: " << k*m << ", ";
      cout << "ans: " << ans << ", \n";
      */

      if (ans % 2 == 1)
        cout << "YES \n";
      else
        cout << "NO \n";
    }
  }

  return 0;
}