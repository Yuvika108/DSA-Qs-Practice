#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string S = "";

  int i = 1;
  do {
    if (i == 1) {
      cout << "I hate ";
    } else {
      if (i % 2 != 0 && i > 1)
        cout << "that I hate ";
      if (i % 2 == 0)
        cout << "that I love ";
    }
    i++;
  } while (i < n + 1);
  cout << "it" << endl;

  return 0;
}