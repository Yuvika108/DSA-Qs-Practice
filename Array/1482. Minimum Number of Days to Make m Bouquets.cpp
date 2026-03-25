#include <vector>
using namespace std;

class Solution {
public:
  bool canMake(vector<int> &bloomDay, int m, int k, int days) {
    int flower = 0, bouquets = 0;
    for (int d : bloomDay) {
      if (d <= days) {
        flower++;
        if (flower == k) {
          bouquets++;
          flower = 0;
        }
      } else {
        flower = 0;
      }
    }
    return bouquets >= m;
  }

  int minDays(vector<int> &bloomDay, int m, int k) {
    long long n = bloomDay.size();

    int low = *min_element(bloomDay.begin(), bloomDay.end());
    int high = *max_element(bloomDay.begin(), bloomDay.end());
    int ans = -1;

    if (n < (long long)m * k)
      return -1;
    else {
      while (low <= high) {
        int mid = low + (high - low) / 2;
        if (canMake(bloomDay, m, k, mid)) {
          ans = mid;
          high = mid - 1;
        } else {
          low = mid + 1;
        }
      }
    }
    return ans;
  }
};
