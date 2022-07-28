#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int fastPower(int base, int power) {
  if (!power) return 1;
  if (power % 2 == 0) {
    int ret = fastPower(base, power / 2);
    return (ret * 1LL * ret) % mod;
  } else
    return (base * 1LL * fastPower(base, power - 1)) % mod;
}
int main() {
  int base, power;
  cin >> base >> power;
  cout << fastPower(base, power) << endl;
}