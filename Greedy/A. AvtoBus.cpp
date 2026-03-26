#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  cin >> t;

  while (t--) {
    long long n; // n = total number of wheels for all buses
    cin >> n;

    long long x, y; // x=min_value, y=max_value

    if (n < 4 || n % 2 == 1)
      cout << "-1 \n";
    else {
      x = (n + 5) / 6;
      y = n / 4;

      cout << x << " " << y << endl;
    }
  }

  return 0;
}