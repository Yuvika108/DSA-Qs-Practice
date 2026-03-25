#include <vector>
using namespace std;
class Solution {
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix) {
    if (matrix.empty())
      return {};
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> ans;

    int top = 0, left = 0;
    int right = m - 1;
    int bottom = n - 1;

    while (left <= right && top <= bottom) {
      for (int i = left; i <= right; i++) {
        ans.push_back(matrix[top][i]);
      }
      top++;

      if (top <= bottom) {
        for (int i = top; i <= bottom; i++) {
          ans.push_back(matrix[i][right]);
        }
        right--;
      }

      if (top <= bottom && left <= right) {
        for (int i = right; i >= left; i--) {
          ans.push_back(matrix[bottom][i]);
        }
        bottom--;
      }

      if (top <= bottom && left <= right) {
        for (int i = bottom; i >= top; i--) {
          ans.push_back(matrix[i][left]);
        }
        left++;
      }
    }
    return ans;
  }
};
