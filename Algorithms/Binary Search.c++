#include <bits/stdc++.h>
using namespace std;
bool condition(int mid) {}
void main() {
  int low, high, mid;
  // Used when we have to minimize the value for given condition
  while (low < high) {
    mid = low + (high - low) / 2;
    if (condition(mid))
      high = mid;
    else
      low = mid + 1;
  }
  // Used when we have to maximize the value for given condition
  while (low < high) {
    mid = low + (high - low + 1) / 2;  // low+high+1/2
    if (condition(mid))
      low = mid;
    else
      high = mid - 1;
  }
}