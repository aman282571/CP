#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  vector<vector<pair<int, int>>> adj;
  vector<int> parent, wt;
  vector<bool> mstSet;
  priority_queue<pair<int, int>, vector<pair<int, int>>,
                 greater<pair<int, int>>>
      pq;  //{wt,node}
  wt[0] = 0;
  parent[0] = -1;
  pq.push({0, 0});

  while (!pq.empty()) {
    int u = pq.top().second;
    pq.pop();
    mstSet[u] = true;
    for (auto& ele : adj[u]) {
      int d = ele.first, node = ele.second;
      if (mstSet[node] == false && d < wt[node]) {
        parent[node] = u;
        wt[node] = d;
        pq.push({d, node});
      }
    }
  }

  for (int i = 1; i < N; i++) cout << parent[i] << " - " << i << " \n";
  return 0;
}