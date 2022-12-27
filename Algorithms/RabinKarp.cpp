#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

int ascii(char ch) { return (ch - 'a' + 1); }

void rabinKarp(string &s, string &pat) {
  int m = s.size(), n = pat.size();
  vector<int> ans;
  int sHash = 0, patHash = 0, basePowN = 1, base = 29, left = 0;
  for (int i = 1; i <= n - 1; i++) basePowN = (basePowN * 1LL * base) % mod;

  for (int i = 0; i < n; i++)
    patHash = (patHash * 1LL * base + ascii(pat[i])) % mod;

  for (int i = 0; i < m; i++) {
    sHash = (sHash * 1LL * base + ascii(s[i])) % mod;
    if (i >= n - 1) {
      if (patHash == sHash) ans.push_back(left);

      sHash = (sHash - ascii(s[left++]) * 1LL * basePowN) % mod;
      sHash = (sHash + mod) % mod;
    }
  }
  if (ans.size() == 0)
    cout << "no match";
  else
    for (auto &i : ans) cout << i << " ";
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  string s, pat;
  cin >> s >> pat;
  rabinKarp(s, pat);
}