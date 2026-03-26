#include <iostream>
#include <set>
#include <utility>
using namespace std;
#define ll long long

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

int main() {
  ll t;
  cin >> t;

  while (t--) {
    ll a, b;
    cin >> a >> b;

    ll x_k, y_k; // king's position
    cin >> x_k >> y_k;

    ll x_q, y_q; // queen's position
    cin >> x_q >> y_q;

    set<pair<int, int>> king_hits, queen_hits;

    for (int j = 0; j < 4; j++) {
      king_hits.insert({x_k + dx[j] * a, y_k + dy[j] * b});
      king_hits.insert({x_k + dx[j] * b, y_k + dy[j] * a});

      queen_hits.insert({x_q + dx[j] * a, y_q + dy[j] * b});
      queen_hits.insert({x_q + dx[j] * b, y_q + dy[j] * a});
    }

    int ans = 0;
    for (auto position : king_hits) {
      if (queen_hits.find(position) != queen_hits.end())
        ans++;
    }

    cout << ans << endl;
  }

  return 0;
}