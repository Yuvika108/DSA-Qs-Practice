#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
  bool isIsomorphic(string s, string t) {
    if (s.length() != t.length())
      return false;

    unordered_map<char, char> m1;
    unordered_map<char, char> m2;

    for (int i = 0; i < s.size(); i++) {
      char c1 = s[i];
      char c2 = t[i];

      if (m1.count(c1) && m1[c1] != t[i])
        return false;
      if (m2.count(c2) && m2[c2] != s[i])
        return false;
      m1[c1] = c2;
      m2[c2] = c1;
    }

    return true;
  }
};
