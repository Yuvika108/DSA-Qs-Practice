#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
  int longestConsecutive(vector<int> &nums) {
    int n = nums.size();
    if (n == 0)
      return 0;
    int longest = 1;
    unordered_set<int> s;
    for (auto i : nums) {
      s.insert(i);
    }
    for (auto j : s) {
      if (s.find(j - 1) == s.end()) {
        int cnt = 1;
        int x = j;
        while (s.find(x + 1) != s.end()) {
          x++;
          cnt++;
        }
        longest = max(longest, cnt);
      }
    }
    return longest;
  }
};
