#include <vector>
using namespace std;

class Solution {
public:
  int findContentChildren(vector<int> &g, vector<int> &s) {
    int n = g.size(); // g=students=greedy
    int m = s.size(); // s=cookies=substance

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int l = 0, r = 0;

    while (l < n && r < m) {
      if (g[l] <= s[r]) {
        l++;
      }
      r++;
    }
    return l;
  }
};
