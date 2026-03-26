#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, h; // n=no. of rows & h= height of fence
  cin >> n >> h;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i]; // 1 <= a[i] <= 2*h
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > h) {
      count = count + 2;
    } else {
      count = count + 1;
    }
  }
  cout << count << endl;

  return 0;
}