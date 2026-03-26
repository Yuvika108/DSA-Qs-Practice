#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    long long n, k, x;
    cin >> n >> k >> x;

    // n= sum you want to obtain
    // unlimited supply of every integer from 1 to k
    // x= type of integers
    // k= limit

    int sum = 0;
    bool ANS = false;

    vector<long long> ans;
    if (x != 1) {
      cout << "YES \n";
      cout << n << endl;
      for (int i = 1; i <= n; i++) {
        cout << "1 ";
      }
      cout << endl;
    } else {
      if (k == 1 || (k == 2 && n % 2 == 1))
        cout << "NO \n";
      else {
        cout << "YES \n";
        if (n % 2 == 0) {
          cout << n / 2 << endl;
          for (int i = 1; i <= n / 2; i++) {
            cout << "2 ";
          }
          cout << endl;
        } else {
          cout << (n - 3) / 2 + 1 << endl;
          for (int i = 1; i <= (n - 3) / 2; i++) {
            cout << "2 ";
          }
          cout << "3 ";
        }
      }
    }
  }

  return 0;
}