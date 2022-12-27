#include <bits/stdc++.h>
using namespace std;
int dp[100][100];
int solve(string &s, int pos, bool bound) {
  if (pos == s.size()) return 0;

  if (dp[pos][bound] != -1) return dp[pos][bound];

  int maxi = bound ? (s[pos] - '0') : 9, ans = 0;

  for (int i = 0; i <= maxi; i++) {
    if (!bound)
      ans += solve(s, pos + 1, false);
    else
      ans += solve(s, pos + 1, (s[pos] - '0' == i));
  }
  return dp[pos][bound] = ans;
}
int main() {
  string s = "123";
  solve(s, 0, true);
}