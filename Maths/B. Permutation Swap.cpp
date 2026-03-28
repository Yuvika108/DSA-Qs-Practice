#include <iostream>
#include <vector>
using namespace std;
int main() {
  long long t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    vector<long long> p(n);
    for (int i = 0; i < n; i++)
      cin >> p[i];

    long long k = abs(p[0] - 1);

    for (int i = 1; i < n; i++)
      k = gcd(k, abs(p[i] - (i + 1)));

    cout << k << endl;
  }

  return 0;
}