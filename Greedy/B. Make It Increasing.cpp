#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    int count = 0;

    for (int i = n - 2; i >= 0; i--) {
      while (a[i] >= a[i + 1]) {
        a[i] = a[i] / 2;
        count++;
        if (a[i] == 0)
          break;
      }

      if (a[i] == 0 && a[i + 1] == 0) {
        count = -1;
        break;
      }
    }

    cout << count << endl;
  }

  return 0;
}