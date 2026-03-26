#include <bits/stdc++.h>
using namespace std;

int main() {

  string s1, s2, s3, s4;
  cin >> s1 >> s2 >> s3;
  s4 = s1 + s2;

  unordered_map<char, int> nameCount, pileCount;

  for (char ch : s3) {
    nameCount[ch]++;
  }

  for (char ch : s4) {
    pileCount[ch]++;
  }

  if (nameCount == pileCount)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}