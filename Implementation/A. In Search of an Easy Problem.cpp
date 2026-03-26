#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, s;
  cin >> n; // 1<=n<=100

  vector<int> v;
  for (int i = 0; i < n; i++) {
    cin >> s;
    v.push_back(s);
  }

  int count = 0;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == 1)
      count++;
  }
  // cout << count << endl;

  if (count > 0)
    cout << "HARD" << endl;
  else
    cout << "EASY" << endl;

  return 0;
}