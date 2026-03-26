#include <bits/stdc++.h>
using namespace std;

int main() {

  int t, n;
  cin >> t;

  vector<string> v1;
  vector<int> v2;
  for (int i = 0; i < t; i++) {
    string s;
    cin >> s;
    v1.push_back(s);
  }

  for (int i = 0; i < v1.size(); i++) {
    if (v1[i] == "Tetrahedron") {
      n = 4;
    }
    if (v1[i] == "Cube") {
      n = 6;
    }
    if (v1[i] == "Octahedron") {
      n = 8;
    }
    if (v1[i] == "Dodecahedron") {
      n = 12;
    }
    if (v1[i] == "Icosahedron") {
      n = 20;
    }
    v2.push_back(n);
  }

  int count = 0;
  for (int i = 0; i < v2.size(); i++) {
    count += v2[i];
  }
  cout << count << endl;

  return 0;
}