#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k; // n>k

  int m[n];

  int count = 0;
  for (int i = 0; i <= (n - 1); i++) {
    cin >> m[i];
  }

  for (int i = 0; i <= (n - 1); i++) {
    if (m[i] >= m[k - 1] && m[i] > 0) {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}