#include <bits/stdc++.h>
using namespace std;
#define pr pair<int, int>
void main() {
  // nodes are from 0-n-1;
  // TC:- (V+E)logV
  // SC:- O(V)
  int n;
  vector<vector<pr> > graph;
  vector<int> dist(n, INT_MAX), parent(n, -1);
  dist[0] = 0;
  priority_queue<pr, vector<pr>, greater<pr> > minHeap;  // {dist,node}
  minHeap.push({0, 0});

  while (!minHeap.empty()) {
    auto [cost, u] = minHeap.top();
    minHeap.pop();
    for (auto &[v, edge] : graph[u]) {
      if (edge + cost < dist[v]) {
        dist[v] = cost + edge;
        minHeap.push({cost + edge, v});
        parent[v] = u;
      }
    }
  }
}