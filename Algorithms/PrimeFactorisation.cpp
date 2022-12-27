#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7, range = 1e5 + 1;
vector<int> calcSPF(int num) {
  vector<int> spf(num + 1);
  iota(begin(spf), end(spf), 0);
  for (int i = 2; i * i <= num; i++) {
    if (spf[i] == i) {
      for (int j = i * i; j <= num; j += i)
        if (spf[j] == j) spf[j] = i;
    }
  }
  return spf;
}
void primeFact(int &num) {
  for (int i = 2; i * i <= num; i++) {
    int cnt = 0;
    while (num % i == 0) {
      num /= i;
      cnt++;
    }
    if (cnt > 0) cout << i << " raise to power " << cnt << endl;
  }
  if (num != 1) cout << num << " raise to power " << 1 << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int num;
  cin >> num;
  primeFact(num);
}