#include <algorithm>
using namespace std;

class Solution {
public:
  int countHousePlacements(int n) {
    const long long mod = 1e9 + 7;

    long long a = 1;
    long long b = 2;

    for (int i = 2; i <= n; i++) {
      long long c = (a + b) % mod;
      a = b;
      b = c;
    }

    long long ans = (b * b) % mod;
    return ans;
  }
};