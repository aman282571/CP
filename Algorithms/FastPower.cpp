#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int fastPower(int base, int power, int mod) {
  if (!power) return 1;
  if (power % 2 == 0) {
    int ret = fastPower(base, power / 2, mod);
    return (ret * 1LL * ret) % mod;
  } else
    return (base * 1LL * fastPower(base, power - 1, mod)) % mod;
}
int main() {
  int base, power;
  cin >> base >> power;
  cout << fastPower(base, power, mod) << endl;
}