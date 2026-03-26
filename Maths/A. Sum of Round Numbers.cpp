#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> ans;
    int m = n;

    while (n > 0) {
      ans.push_back(n % 10);
      n = n / 10;
    }

    int count = 0;
    for (int i = 0; i < ans.size(); i++) {
      if (ans[i] != 0)
        count++;
    }
    cout << count << endl;

    vector<int> result;
    int place = 1;
    while (m > 0) {
      int num = m % 10;
      if (num != 0)
        result.push_back(num * place);
      m /= 10;
      place *= 10;
    }

    for (int i = 0; i < result.size(); i++) {
      cout << result[i] << " ";
    }
    cout << endl;
  }
  return 0;
}