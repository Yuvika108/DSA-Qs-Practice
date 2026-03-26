#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string s;
  cin >> s;

  int countA = 0;
  int countD = 0;

  for (char &ch : s) {
    if (ch == 'A')
      countA++;
    else
      countD++;
  }

  if (countA > countD)
    cout << "Anton" << endl;
  else if (countA == countD)
    cout << "Friendship" << endl;
  else
    cout << "Danik" << endl;

  return 0;
}