#include <iostream>
#include <numeric>
using namespace std;
#define ll long long

int main() {
  ll a = 1;
  for (ll i = 2; i <= 50; i++)
    a = lcm(a, i);

  int t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    int i = 1;
    while (n % i == 0)
      i++;

    cout << i - 1 << endl;
  }

  return 0;
}