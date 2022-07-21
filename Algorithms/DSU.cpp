#include <bits/stdc++.h>
using namespace std;
class DSU {
 public:
  vector<int> p, rank;
  DSU(int size) {
    rank.resize(size, 1);
    p.resize(size, 0);
    iota(begin(p), end(p), 0);
  }
  int find(int node) {
    if (p[node] == node) return node;
    return p[node] = find(p[node]);
  }
  void join(int x, int y) {
    int p1 = find(x), p2 = find(y);
    if (p1 == p2) return;
    if (rank[p2] > rank[p1]) swap(p2, p1);
    p[p2] = p1;
    rank[p1] += rank[p2];
  }
};
