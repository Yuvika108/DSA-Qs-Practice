#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;
    long long v[n];
    for (int i = 0; i < n; i++)
      cin >> v[i];

    map<long long, long long> frequency_map;
    for (int i = 0; i < n; i++)
      frequency_map[v[i]]++;

    if (frequency_map.size() >= 3)
      cout << "NO \n";
    else {
      long long freq1 = frequency_map.begin()->second;
      long long freq2 = frequency_map.rbegin()->second;

      if (freq1 == freq2)
        cout << "YES \n";
      else if (n % 2 == 1 && abs(freq1 - freq2) == 1)
        cout << "YES \n";
      else
        cout << "NO \n";
    }
  }

  return 0;
}