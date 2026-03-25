#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;
class Solution {
public:
  int shipWithinDays(vector<int> &weights, int days) {
    int low = *std::max_element(weights.begin(), weights.end());
    int high = std::accumulate(weights.begin(), weights.end(), 0);

    while (low <= high) {
      int mid = low + (high - low) / 2;
      int days_needed = 1, current_weight = 0;
      for (int weight : weights) {
        if (current_weight + weight > mid) {
          days_needed++;
          current_weight = 0;
        }
        current_weight = current_weight + weight;
      }
      if (days_needed > days) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }

    return low;
  }
};