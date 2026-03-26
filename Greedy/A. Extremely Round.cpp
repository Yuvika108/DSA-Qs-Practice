#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll x) {
  ll count_zero = 0;
  ll count_digit = 0;

  while (x) {
    if (x % 10 == 0)
      count_zero++;
    count_digit++;
    x = x / 10;
  }
  return count_zero == count_digit - 1;
}

int main() {

  vector<ll> round_numbers;
  for (ll i = 1; i <= 999999; i++) {
    if (check(i) == true)
      round_numbers.push_back(i);
  }

  int t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    ll answer = 0;
    for (int i = 0; i < round_numbers.size(); i++) {
      if (round_numbers[i] <= n)
        answer++;
      else
        break;
    }
    cout << answer << endl;
  }

  return 0;
}