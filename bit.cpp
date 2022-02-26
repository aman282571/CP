#include<bits/stdc++.h>
using namespace std;
// there are two operations in BIT:- 
// 1. Update the value at index i by val
// 2. get the value at iindex i

class BIT{
    vector<int> bit;
    int sz;
    // get the prefix sum till index i
    void getSum(int index){
        int sum = 0;
        while (index > 0) {
            sum += bit[index];
            index = index - index & (-index);
        }
    }
    // this will update the value at index i and also in other indicex where this value is used
    void update(int index, int val) {
        while (index <= sz) {
            bit[index] += val;
           index = index + index & (-index);
       }
      }
};
