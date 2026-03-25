#include <algorithm>
#include <string>
#include <unordered_set>
using namespace std;
class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int n = s.length();
    unordered_set<char> SET;

    int maxLen = 0, left = 0, right = 0;

    while (right < n) {
      if (SET.find(s[right]) == SET.end()) {
        SET.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
        right++;
      } else {
        SET.erase(s[left]);
        left++;
      }
    }

    return maxLen;
  }
};