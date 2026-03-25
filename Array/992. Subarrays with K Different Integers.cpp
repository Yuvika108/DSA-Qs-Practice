#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  int atMostK(vector<int> &nums, int k) {
    int l = 0, res = 0;
    unordered_map<int, int> mp;

    for (int r = 0; r < nums.size(); r++) {
      if (mp[nums[r]]++ == 0)
        k--;

      while (k < 0) {
        if (--mp[nums[l]] == 0)
          k++;
        l++;
      }

      res += (r - l + 1);
    }
    return res;
  }

  int subarraysWithKDistinct(vector<int> &nums, int k) {
    return atMostK(nums, k) - atMostK(nums, k - 1);
  }
};
