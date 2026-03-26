#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a1[n][3];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> a1[i][j];
    }
  }

  int rCnt[n];
  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < 3; j++) {
      if (a1[i][j] == 1) {
        count++;
      }
    }
    rCnt[i] = count;
  }

  int nos = 0;
  for (int i = 0; i < n; i++) {
    if (rCnt[i] > 1)
      nos++;
  }
  cout << nos << endl;

  return 0;
}