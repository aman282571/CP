#include <bits/stdc++.h>
using namespace std;
int findPivot(vector<int>& arr, int left, int right) {
  int idx = left + rand() % (right - left + 1);
  swap(arr[idx], arr[right]);
  int pindex = left;
  for (int i = left; i <= right - 1; i++) {
    if (arr[i] < arr[right]) {
      swap(arr[i], arr[pindex]);
      pindex++;
    }
  }
  swap(arr[right], arr[pindex]);
  return pindex;
}
void quickSort(vector<int>& arr, int left, int right) {
  if (left >= right) return;
  int pivot = findPivot(arr, left, right);
  quickSort(arr, left, pivot);
  quickSort(arr, pivot + 1, right);
}
int main() {
  vector<int> arr = {3, 5, 2, 7, 5, 1, 8, 5, 4, 32, 6};
  quickSort(arr, 0, arr.size() - 1);
  for (auto& i : arr) cout << i << " ";
}