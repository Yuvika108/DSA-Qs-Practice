#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
      cin >> a[i];

    /*
    unordered_map<long long, long long> freq;
    long long MaxFreq=0;
    for(int i=0; i<n; i++){
        freq[a[i]]++;
        MaxFreq = max(MaxFreq, freq[a[i]]);
    }*/

    sort(a.begin(), a.end());

    long long current = 1, MaxFreq = 1;
    for (int i = 1; i < n; i++) {
      if (a[i] == a[i - 1]) {
        current++;
        MaxFreq = max(MaxFreq, current);
      } else {
        current = 1;
      }
    }

    long long op = 0;
    while (MaxFreq < n) {
      op++; // clone
      long long add = min(MaxFreq, n - MaxFreq);
      op += add; // swap;
      MaxFreq += add;
    }

    cout << op << endl;
  }

  return 0;
}