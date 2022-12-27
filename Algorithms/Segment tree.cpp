// Link To study : -https :  // www.youtube.com/watch?v=-dUiRtJ8ot0

#include <bits/stdc++.h>
using namespace std;

//  seg for max value
void buildForMax(vector<int>& arr, vector<int>& seg, int curPos, int l, int r) {
  if (l == r) {
    seg[curPos] = arr[l];
    return;
  }
  int left = 2 * curPos + 1, right = 2 * curPos + 2, mid = l + (r - l) / 2;
  buildForMax(arr, seg, left, l, mid);
  buildForMax(arr, seg, right, mid + 1, r);
  seg[curPos] = max(seg[left], seg[right]);
}
void updateForMax(vector<int>& arr, vector<int>& seg, int curPos, int l, int r,
                  int idx, int newVal) {
  if (l == r && l == idx) {
    seg[curPos] = newVal;
    return;
  }
  if (idx >= l && idx <= r) {
    int mid = l + (r - l) / 2;
    updateForMax(arr, seg, 2 * curPos + 1, l, mid, idx, newVal);
    updateForMax(arr, seg, 2 * curPos + 2, mid + 1, r, idx, newVal);
    int lVal = seg[2 * curPos + 1];
    int rVal = seg[2 * curPos + 2];
    seg[curPos] = max(lVal, rVal);
  }
}
int queryForMax(vector<int>& arr, vector<int>& seg, int curPos, int l, int r,
                int& ql, int& qr) {
  if (ql <= l && qr >= r)
    return seg[curPos];
  else if (ql > r || qr < l)
    return INT_MIN;
  int mid = l + (r - l) / 2;
  int left = queryForMax(arr, seg, 2 * curPos + 1, l, mid, ql, qr);
  int right = queryForMax(arr, seg, 2 * curPos + 2, mid + 1, r, ql, qr);
  return max(left, right);
}

//  seg for min value
void buildForMin(vector<int>& arr, vector<int>& seg, int curPos, int l, int r) {
  if (l == r) {
    seg[curPos] = arr[l];
    return;
  }
  int mid = l + (r - l) / 2;
  buildForMin(arr, seg, 2 * curPos + 1, l, mid);
  buildForMin(arr, seg, 2 * curPos + 2, mid + 1, r);
  int lVal = seg[2 * curPos + 1];
  int rVal = seg[2 * curPos + 2];
  seg[curPos] = min(lVal, rVal);
}
int queryForMin(vector<int>& arr, vector<int>& seg, int curPos, int l, int r,
                int& ql, int& qr) {
  if (ql <= l && qr >= r)
    return seg[curPos];
  else if (ql > r || qr < l)
    return INT_MAX;
  int mid = l + (r - l) / 2;
  int left = queryForMin(arr, seg, 2 * curPos + 1, l, mid, ql, qr);
  int right = queryForMin(arr, seg, 2 * curPos + 2, mid + 1, r, ql, qr);
  return min(left, right);
}
void updateForMin(vector<int>& arr, vector<int>& seg, int curPos, int l, int r,
                  int idx, int newVal) {
  if (l == r && l == idx) {
    seg[curPos] = newVal;
    return;
  }
  if (idx >= l && idx <= r) {
    int mid = l + (r - l) / 2;
    updateForMin(arr, seg, 2 * curPos + 1, l, mid, idx, newVal);
    updateForMin(arr, seg, 2 * curPos + 2, mid + 1, r, idx, newVal);
    int lVal = seg[2 * curPos + 1];
    int rVal = seg[2 * curPos + 2];
    seg[curPos] = min(lVal, rVal);
  }
}

// main function
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n;
  cin >> n;
  vector<int> arr(n, 0);
  for (auto& i : arr) cin >> i;
  vector<int> segMax(4 * n, 0), segMin(4 * n, 0);
  //   buildForMax(arr, segMax, 0, 0, n - 1);
  buildForMin(arr, segMin, 0, 0, n - 1);
}
