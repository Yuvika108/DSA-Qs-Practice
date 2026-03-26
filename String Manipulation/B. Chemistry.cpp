#include <bits/stdc++.h>
using namespace std;
#define ll long long

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

int main() {
  ll t;
  cin >> t;

  while (t--) {
    ll n, k;
    cin >> n >> k; // length of the string s, number of characters to be
                   // deleted.

    string s;
    cin >> s;

    vector<int> frequency_of_characters(26, 0);
    for (int i = 0; i < n; i++) {
      frequency_of_characters[s[i] - 'a']++;
    }

    ll odd_frequency = 0;
    for (int i = 0; i < 26; i++) {
      odd_frequency += frequency_of_characters[i] % 2;
    }

    if (odd_frequency > k + 1)
      cout << "NO \n";
    else
      cout << "YES \n";
  }

  return 0;
}