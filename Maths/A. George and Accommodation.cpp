#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, p, q;
  cin >> n; // 1<=n<=100

  vector<int> vp, vq;
  for (int i = 0; i < n; i++) {
    cin >> p >> q;
    vp.push_back(p);
    vq.push_back(q);
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    // cout << vq[i]-vp[i] << endl;
    if (vq[i] - vp[i] >= 2)
      count++;
  }
  cout << count << endl;

  return 0;
}