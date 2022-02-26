#include<bits/stdc++.h>
using namespace std;
void main(){
// nodes are from 0-n-1;
// TC:- (V+E)logV
// SC:- O(V)
    int n;
    vector<vector<pair<int, int>>> graph;
    vector<int> dist(n, INT_MAX), parent(n, -1);
    dist[0] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // {dist,node}
    pq.push({0, 0});
    while (!pq.empty()){
        int d= pq.top().first,node=pq.top().second;
        pq.pop();
        for (auto & ele : graph[node]){
            int nnode =ele.first,edge=ele.second;
            if(edge+d<dist[nnode]){
                dist[nnode] = d + edge;
                pq.push({d + edge, nnode});
                parent[nnode] = node;
            }
        }
    }
}