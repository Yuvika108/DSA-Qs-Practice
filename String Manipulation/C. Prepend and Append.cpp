#include <iostream>
using namespace std;
#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n; // n = length of timur string s
    cin >> n;

    string s;
    cin >> s;

    ll ans = n;
    ll left = 0;
    ll right = n - 1;

    while (left <= right) {
      if (s[left] != s[right])
        ans -= 2;
      else
        break;
      left++;
      right--;
    }

    cout << ans << endl;
  }
  return 0;
}