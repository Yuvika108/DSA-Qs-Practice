#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int index = 0;

    for (int j : nums) {
      if (j != 0) {
        nums[index] = j;
        index++;
      }
    }

    while (index < nums.size()) {
      nums[index] = 0;
      index++;
    }

    for (int x : nums) {
      cout << x << " ";
    }
  }
};
