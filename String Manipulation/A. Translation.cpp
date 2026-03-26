#include <bits/stdc++.h>
using namespace std;

int main() {

  string s, t;
  cin >> s;
  cin >> t;

  int n = s.size();
  int r = 1;

  if (s.size() != t.size())
    r = 0;
  else {
    for (int i = 0; i < n; i++) {
      // cout<<"\ni: "<<i<<"\ts[i]: "<<s[i];
      for (int j = n - i - 1; j >= 0; j--) {
        // cout<<"\nj: "<<j<<"\tt[j]: "<<t[j];
        if (s[i] != t[j]) {
          r = 0;
          // cout<<"\ncondition NOT matched: r:: "<<r;
        }
        break;
      }
    }
  }

  if (r == 1)
    cout << "\nYES" << endl;
  else
    cout << "\nNO" << endl;

  return 0;
}