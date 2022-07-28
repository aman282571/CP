#include <bits/stdc++.h>
using namespace std;
// there are two operations in BIT:-
// 1. Update the value at index i by val
// 2. get the value at index i
class BIT {
 public:
  vector<int> bit;
  BIT(int size) { bit.resize(size + 1, 0); }
  // get the prefix sum till index i
  void getSum(int index) {
    int sum = 0;
    while (index > 0) {
      sum += bit[index];
      index = index - index & (-index);
    }
  }
  // this will update the value at index i and also in other indices where this
  // value is used
  void update(int index, int val) {
    while (index < bit.size()) {
      bit[index] += val;
      index = index + index & (-index);
    }
  }
};
