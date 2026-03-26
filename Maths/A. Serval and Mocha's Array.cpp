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

    /*
    int g = v[0];
    for(int i=1; i<n; i++) g=gcd(g,v[i]);
    */
    int flag = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        int g = __gcd(v[i], v[j]);
        if (g <= 2)
          flag = 1;
      }
    }

    if (flag == 1)
      cout << "YES \n";
    else
      cout << "NO \n";
  }

  return 0;
}