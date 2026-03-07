#include <vector>
using namespace std;
class Solution {
public:
  int findPeakElement(vector<int> &nums) {
    int max = nums[0];
    int ans;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] >= max) {
        max = nums[i];
        ans = i;
      }
    }
    return ans;
  }
};