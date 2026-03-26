#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int t;
  cin >> t;

  while (t--) {

    ll n;
    cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];

    int negative_one = 0;
    int positive_one = 0;

    for (int i = 0; i < n; i++) {
      if (v[i] == -1)
        negative_one++;
      else
        positive_one++;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
      sum += v[i];

    int product = 1;
    for (int i = 0; i < n; i++)
      product *= v[i];

    ll flip = 0;

    /*
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "negative_one: " << negative_one << endl;
    cout << "positive_one: " << positive_one << endl;
    cout << "flip: " << flip << endl;
    */

    while (negative_one > positive_one || negative_one % 2 == 1) {
      flip++;
      positive_one++;
      negative_one--;
    }

    cout << flip << endl;
  }
  return 0;
}