#include <bits/stdc++.h>
using namespace std;

bool check(string s, string x) {
  if (x.size() < s.size())
    return false;
  for (int i = 0; i < x.size() - s.size() + 1; i++) {
    if (x.substr(i, s.size()) == s)
      return true;
  }
  return false;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];

    long long no_is_present = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] == k) {
        no_is_present = 1;
        break;
      }
    }

    if (no_is_present)
      cout << "YES \n";
    else
      cout << "NO \n";
  }
  return 0;
}