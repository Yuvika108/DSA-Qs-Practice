#include <bits/stdc++.h>
using namespace std;

int main() {
  // efficiency of a team is equal to the total number of goals the team scores
  // in each of its matches minus the total number of goals scored by the
  // opponent in each of its matches
  int t;
  cin >> t;

  while (t--) {
    int n; // 2<=n<=100
    cin >> n;

    vector<int> v(n - 1);
    for (int i = 0; i < n - 1; i++)
      cin >> v[i];

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
      sum += v[i];

    cout << 0 - sum << endl;
  }

  return 0;
}