#include <bits/stdc++.h>
using namespace std;
string intPart(double val) { return to_string(int(val)); }
string decimalPart(double val, int roundTo) {
  int num = int(val * roundTo + 0.5) % roundTo;
  if (num == 0)
    return "00";
  else if (num / 10 == 0)
    return "0" + to_string(num);
  return to_string(num);
}
int main() {
  int roundTo = 100;
  double val;
  cin >> val;
  string ans = intPart(val) + "." + decimalPart(val, roundTo);
  cout << ans;
}