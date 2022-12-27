#include <bits/stdc++.h>
using namespace std;
void main() {
  // Increasing and non-decreasing stack ,used for PLE,NLE.
  vector<int> arr;
  stack<int> st;
  for (int i = 0; i < arr.size(); i++) {
    while (!st.empty() && arr[st.top()] > arr[i]) st.pop();
    // now if stack is empty then use either -1 or size else element at the top
    // of stack is PLE or NLE(if moving in reverse direction)
  }

  // Decreasing and non increasing stack ,used for PGE,NGE
  for (int i = 0; i < arr.size(); i++) {
    while (!st.empty() && arr[st.top()] < arr[i]) st.pop();
    // now if stack is empty then use either -1 or size else element at the top
    // of stack is PGE or NGE(if moving in reverse direction)
  }
}