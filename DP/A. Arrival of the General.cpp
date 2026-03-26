#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; // 2<=n<=100
  // cout << "n: ";
  cin >> n;

  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  /*
  for(int i=0; i<n; i++){
      cout << p[i] << " ";
  }
  cout << endl;
  */

  int count = 0;
  int max = *max_element(p.begin(), p.end());
  // cout << " max: " << max << endl;
  int min = *min_element(p.begin(), p.end());
  // cout << " min: " << min << endl;

  int maxPos, minPos = 0;
  for (int i = 0; i < n; i++) {
    if (p[i] == max) {
      maxPos = i;
      break;
    }
  }
  for (int i = n - 1; i >= 0; i--) {
    if (p[i] == min) {
      minPos = i;
      break;
    }
  }

  int answer = maxPos + (n - 1 - minPos);
  if (maxPos > minPos)
    answer--;

  cout << answer << endl;

  return 0;
}