#include <bits/stdc++.h>
using namespace std;
int m = 1e9 + 7;
int calc(int base, int power) {
  if (!power) return 1;
  if (power % 2 == 0) {
    long ret = calc(base, power / 2);
    return (ret * ret) % m;
  } else {
    long ret = calc(base, power - 1);
    return (long(base) * ret) % m;
  }
}
int main() {
  int base, power;
  cin >> base >> power;
  cout << calc(base, power) << endl;
}