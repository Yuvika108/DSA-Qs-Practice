#include <vector>
using namespace std;

class Solution {
public:
  vector<int> bestTower(vector<vector<int>> &towers, vector<int> &center,
                        int radius) {
    int c_x = center[0], c_y = center[1];
    int bestQuality = -1;
    vector<int> ans = {-1, -1};

    for (auto &t : towers) {
      int x = t[0], y = t[1], q = t[2];
      int distance = abs(x - c_x) + abs(y - c_y);

      if (distance <= radius) {
        if (q > bestQuality ||
            (q == bestQuality &&
             (ans[0] == -1 || x < ans[0] || (x == ans[0] && y < ans[1])))) {
          bestQuality = q;
          ans = {x, y};
        }
      }
    }
    return ans;
  }
};
