#include <vector>
using namespace std;
class Solution {
public:
  int searchInsert(vector<int> &nums, int target) {
    int j = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == target)
        return j;
      if (nums[i] <= target)
        j++;
    }
    return j;
  }
};