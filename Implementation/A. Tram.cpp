#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n; // n= no. of stops

  int a[n], b[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  cout << endl;

  int sum = 0;
  int sum_max = 0;

  for (int i = 0; i < n; i++) {
    sum -= a[i];
    sum += b[i]; // a[0]=b[n-1]=0

    if (sum > sum_max) {
      sum_max = sum;
    }
  }
  cout << sum_max << endl;

  return 0;
}