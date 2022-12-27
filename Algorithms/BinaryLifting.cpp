#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
vector<vector<int>> graph;
// filling ancestor table
void dfs(vector<vector<int>>& ances, int depth, int node) {
  for (int i = 1; i < ances[node].size() && (depth >= (1 << i)); i++)
    ances[node][i] = ances[ances[node][i - 1]][i - 1];
  for (auto& v : graph[node]) dfs(ances, depth + 1, v);
}
// finding nth ancestor
int findNth(int node, int nth, vector<vector<int>>& ances) {
  int maxDepth = ances[0].size(), i = 0;
  if (nth > maxDepth) return -1;  // modify

  while (nth > 0 && node != -1) {
    // 00110
    int bit = nth & 1;
    if (bit == 1) node = ances[node][i];
    nth = (nth >> 1);
    i++;
  }
  return node;
}
void bin_lifting(vector<int>& parent) {
  int n = parent.size(), maxdepth = ceil(log2(n));
  graph.resize(n);
  for (int i = 0; i < n; i++)
    if (parent[i] != -1) graph[parent[i]].push_back(i);
  vector<vector<int>> ances(n, vector<int>(maxdepth, -1));

  for (int i = 0; i < n; i++) ances[i][0] = parent[i];
  dfs(ances, 0, 0);

  int q;
  cin >> q;
  while (q--) {
    int node, nth;
    cin >> node >> nth;
    cout << findNth(node, nth, ances) << "\n";
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int n;
  cin >> n;
  vector<int> parent(n, 0);
  for (auto& i : parent) cin >> i;
  bin_lifting(parent);
}