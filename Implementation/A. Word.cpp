#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int count1 = 0;
  int count2 = 0;

  for (char &ch : s) {
    if (ch >= 49 && ch <= 90) {
      count1++;
    } else {
      count2++;
    }
  }

  if (count1 <= count2) {
    for (char &ch : s) {
      ch = tolower(ch);
    }
    cout << s << endl;
  }

  else {
    for (char &ch : s) {
      ch = toupper(ch);
    }
    cout << s << endl;
  }

  return 0;
}