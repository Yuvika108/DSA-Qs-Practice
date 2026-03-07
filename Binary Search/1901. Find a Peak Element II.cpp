#include <vector>
using namespace std;
class Solution {
public:
  vector<int> findPeakGrid(vector<vector<int>> &mat) {
    int m = mat.size();
    int n = mat[0].size();

    int startCol = 0, endCol = n - 1;

    while (startCol <= endCol) {
      int maxRow = 0, midCol = startCol + (endCol - startCol) / 2;

      for (int i = 0; i < m; i++) {
        if (mat[i][midCol] > mat[maxRow][midCol])
          maxRow = i;
      }

      bool leftIsBig =
          (midCol - 1 >= 0) && (mat[maxRow][midCol - 1] > mat[maxRow][midCol]);
      bool rightIsBig =
          (midCol + 1 < n) && (mat[maxRow][midCol + 1] > mat[maxRow][midCol]);

      if (!leftIsBig && !rightIsBig)
        return {maxRow, midCol};
      else if (rightIsBig)
        startCol = midCol + 1;
      else
        endCol = midCol - 1;
    }
    return {-1, -1};
  }
};