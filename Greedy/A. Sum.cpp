#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  vector<string> v;
  string S;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c || b + c == a || a + c == b)
      S = "YES";
    else
      S = "NO";
    v.push_back(S);
  }

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << endl;
  }

  return 0;
}