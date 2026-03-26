#include <bits/stdc++.h>
using namespace std;

const int score[10][10] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1}, {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1}, {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1}, {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1}, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

int main() {
  // efficiency of a team is equal to the total number of goals the team scores
  // in each of its matches minus the total number of goals scored by the
  // opponent in each of its matches

  int t;
  cin >> t;

  while (t--) {

    // taking input
    char a[10][10];
    for (int i = 0; i < 10; i++) {
      string s;
      cin >> s;
      for (int j = 0; j < 10; j++) {
        a[i][j] = s[j];
      }
    }

    // iterating through array
    int total_score = 0;
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        if (a[i][j] == 'X')
          total_score += score[i][j];
      }
    }

    cout << total_score << endl;
  }

  return 0;
}