#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int a;
  cin >> a;

  string s1[a];

  for (int i = 0; i < a; i++) {
    cin >> s1[i];
  }
  for (int i = 0; i < a; i++) {
    int b = s1[i].size();
    if (b > 10) {
      cout << s1[i][0] << b - 2 << s1[i][b - 1] << endl;
    } else {
      cout << s1[i] << endl;
    }
  }

  return 0;
};