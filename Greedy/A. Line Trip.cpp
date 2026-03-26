#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  while (t--) {
    long long n, x;
    cin >> n >> x;

    vector<long long> a;
    a.push_back(0);

    for (int i = 0; i < n; i++) {
      long long point;
      cin >> point;
      a.push_back(point);
    }
    a.push_back(x);
    n = a.size();

    long long max_distance_btw_pts = INT_MIN;
    for (int i = 0; i < n; i++) {
      if (i == n - 1) {
        max_distance_btw_pts = max(max_distance_btw_pts, 2 * (a[i] - a[i - 1]));
      } else {
        max_distance_btw_pts = max(max_distance_btw_pts, a[i] - a[i - 1]);
      }
    }

    cout << max_distance_btw_pts << endl;
  }

  return 0;
}