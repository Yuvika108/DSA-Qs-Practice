#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    long long n; // n=length of given array
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];

    // a[l]=a[l+1], a[l+1]=a[l+2], …, a[r-1]=a[r], a[r]=a[l]
    // output: maximum value of a[n]-a[1]

    long long answer = v[n - 1] - v[0];

    for (int i = 1; i < n; i++) {
      answer = max(answer, v[i] - v[0]);
    }

    for (int i = 0; i < n - 1; i++) {
      answer = max(answer, v[n - 1] - v[i]);
    }

    for (int i = 0; i < n - 1; i++) {
      answer = max(answer, v[i] - v[i + 1]);
    }

    cout << answer << endl;
  }

  return 0;
}