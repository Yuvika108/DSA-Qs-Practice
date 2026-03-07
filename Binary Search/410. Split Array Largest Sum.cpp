#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;
class Solution {
public:
  bool canSpilt(vector<int> &nums, int k, long long maxAllowed) {
    long long curr = 0;
    int count = 1;

    for (int i : nums) {
      if (curr + i > maxAllowed) {
        count++;
        curr = i;
        if (count > k)
          return false;
      } else {
        curr += i;
      }
    }
    return true;
  }

  int splitArray(vector<int> &nums, int k) {
    long long low = *max_element(nums.begin(), nums.end());
    long long high = accumulate(nums.begin(), nums.end(), 0LL);
    long long ans = high;

    while (low <= high) {
      long long mid = (low + high) / 2;
      if (canSpilt(nums, k, mid)) {
        ans = mid;
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }
    return ans;
  }
};