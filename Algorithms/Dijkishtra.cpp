#include <bits/stdc++.h>
using namespace std;
void main() {
  // nodes are from 0-n-1;
  // TC:- (V+E)logV
  // SC:- O(V)
  int n;
  vector<vector<pair<int, int> > > graph;
  vector<int> dist(n, INT_MAX), parent(n, -1);
  dist[0] = 0;
  priority_queue<pair<int, int>, vector<pair<int, int> >,
                 greater<pair<int, int> > >
      pq;  // {dist,node}
  pq.push({0, 0});

  while (!pq.empty()) {
    auto [cost, u] = pq.top();
    pq.pop();
    for (auto &[v, edge] : graph[u]) {
      if (edge + cost < dist[v]) {
        dist[v] = cost + edge;
        pq.push({cost + edge, v});
        parent[v] = u;
      }
    }
  }
}