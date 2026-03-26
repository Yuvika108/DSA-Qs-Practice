#include <bits/stdc++.h>
using namespace std;

bool hasDistinctDigits(int year) {
  string s = to_string(year);
  set<char> st(s.begin(), s.end());
  return st.size() == s.size();
}

int main() {

  int year, answer;
  cin >> year;

  answer = year + 1;
  while (!hasDistinctDigits(answer)) {
    answer++;
  }

  cout << answer << endl;

  return 0;
}