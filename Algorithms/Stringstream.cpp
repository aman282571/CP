#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  string s = "amanthakur";
  cout << s.size() << endl;
  stringstream ss(s);
  string t;
  while (getline(ss, t, 'a')) cout << t << endl;
}