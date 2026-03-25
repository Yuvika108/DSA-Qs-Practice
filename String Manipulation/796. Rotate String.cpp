#include <string>
using namespace std;

class Solution {
public:
  bool rotateString(string s, string goal) {
    if (s.length() != goal.length())
      return false;
    else {
      string s_new = s + s;
      if (s_new.find(goal) != string::npos)
        return true;
      return false;
    }
  }
};
