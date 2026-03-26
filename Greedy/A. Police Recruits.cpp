#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  // C--->no. of crimes, P->no. of police.

  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int countC = 0;
  int countP = 0;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == -1) {
      if (countP > 0)
        countP--;
      else
        countC++;
    } else {
      countP += v[i];
    }
  }
  cout << countC << endl;

  return 0;
}