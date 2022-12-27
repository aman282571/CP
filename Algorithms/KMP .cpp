#include <bits/stdc++.h>
using namespace std;
int m = 1e9 + 7;

// kmp lps table genrator
void solve(string &pat, vector<int> &lps) {
  int n = pat.size(), i = 1, j = 0;
  while (i < n) {
    if (pat[i] == pat[j]) {
      lps[i] = j + 1;
      i++;
      j++;
    } else {
      if (j != 0)
        j = lps[j - 1];
      else
        i++;
    }
  }
  cout << "printing lps table: " << endl;
  for (int i = 0; i < n; i++) cout << pat[i] << " ";
  cout << endl;
  for (int i = 0; i < n; i++) cout << lps[i] << " ";
  cout << endl;
}

// kmp implementation
int kmp(string &str, string &pat, vector<int> &lps) {
  int m = str.size(), n = pat.size(), i = 0, j = 0;
  while (i < m) {
    if (j == n) return i - n;
    if (str[i] == pat[j]) {
      i++;
      j++;
    } else {
      if (j != 0)
        j = lps[j - 1];
      else
        i++;
    }
  }
  return -1;
}
int main() {
  string str, pat;
  cin >> str;
  cin >> pat;
  vector<int> lps(pat.size(), 0);
  solve(pat, lps);
  cout << "Ans is: ";
  cout << kmp(str, pat, lps);
}
