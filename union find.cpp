#include<bits/stdc++.h>
using namespace std; 
    //---------------------------------- union find by rank and path compression-------------------------
class UnionFind{
    vector<int> parent, rank; // all elements are parent of themselves and there rank is 1 beacuase the size of tree is 1

int find(int node){
    if(parent[node]==node)
        return node;
    return parent[node]=find(parent[node]);    // path compression
}
void Union(int x,int y){     //union by rank
    int p1=find(x),p2=find(y);
    if(rank[p1]>=rank[p2]){
        parent[p2] = p1;
        rank[p1]+=rank[p2];
    }
    else{
         parent[p1] = p2;
        rank[p2]+=rank[p1];
    }
}
};

