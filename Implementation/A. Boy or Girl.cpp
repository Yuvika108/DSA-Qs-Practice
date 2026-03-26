#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  set<char> v;
  for (int i = 0; i < s.size(); i++) {
    v.insert(s[i]);
  }

  int count = v.size();

  if (count % 2 != 0)
    cout << "IGNORE HIM!" << endl;
  else if (count % 2 == 0)
    cout << "CHAT WITH HER!" << endl;

  return 0;
}