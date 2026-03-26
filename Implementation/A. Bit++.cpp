#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  string x;
  string a("X++");
  string b("X--");
  string c("++X");
  string d("--X");

  int m = 0;

  for (int i = 1; i <= n; i++) {
    cin >> x;
    if (x == a || x == c) {
      m++;
    } else if (x == b || x == d) {
      m--;
    }
  }
  cout << m << endl;

  return 0;
}