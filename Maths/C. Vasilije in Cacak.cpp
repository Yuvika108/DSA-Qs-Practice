#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int t;
  cin >> t;

  while (t--) {
    ll n, k, x;
    cin >> n >> k >> x;

    // n=maximum element he can choose, k=number of elements he can choose,
    // x=sum he has to reach.
    // k distinct integers between 1 & n whose sum = x

    ll min_sum = (k * (k + 1)) / 2;
    ll max_sum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;

    if (x >= min_sum && x <= max_sum)
      cout << "YES \n";
    else
      cout << "NO \n";
  }

  return 0;
}