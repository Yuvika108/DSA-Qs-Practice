#include <algorithm>
#include <map>
#include <vector>
using namespace std;
class Solution {
public:
  int minimumRounds(vector<int> &tasks) {
    int n = tasks.size();

    sort(tasks.begin(), tasks.end());

    map<int, int> freq;
    for (int x : tasks) {
      freq[x]++;
    }

    int rounds = 0;
    for (auto it : freq) {
      int f = it.second;

      if (f == 1)
        return -1;

      rounds += (f + 2) / 3;
    }

    return rounds;
  }
};