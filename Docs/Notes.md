# Trees

**Definition:-** Directed/Undirected connected acyclic graph.

# Binary Trees:-

**Tree having at most two children**

## Types of Binary Trees

1. Full Binary Tree:- Every node has either two or no children.
2. Perfect Binary Tree:- All internal node has two children and all leaf node are at same level.
3. Complete Binary Tree:- All level are filled except last where all nodes are as left as possible.
4. Balanced Binary Tree:- Difference between left and right subtree height is <=1
5. Degenerate or Pathological Tree:- A degenerate or pathological tree is the tree having a single child either left or right.
6. Skewed Binary Tree:- A skewed binary tree is a pathological/degenerate tree in which the tree is either dominated by the left nodes or the right nodes. Thus, there are two types of skewed binary tree: left-skewed binary tree and right-skewed binary tree.

## Why median is the nearest point to all the numbers in the array

```
I have a simpler proof. The meet point must be somewhere between current min and max. No matter which point you pick, the total running length for min and max is the same, i.e. abs(min_point-meet_point)+abs(max_point-meet_point) = SOME_CONSTANT.

So, we can effectively reduce the problem size from n to n-2 by discarding min and max points. Do you see it? That is the definition of median, isn't it?

Let's have an example. suppose we have an array, [1,2,3,4,5,6,7]. The meet point must lie between 1 and 7. For any value in this range, the total running length for 1 and 7 is the same. So, array => [2,3,4,5,6]...

I hope it can help people who don't want to read some long proofs.
```

# Dijkishtra algo

1. If we don't apply dist[v]<edge+dist[u] condition then also it will give us correct answer because we are always traversing through minimum cost using minHeap. Condition's use it to only prune (to make it fast otherwise it will give TLE)

# Hashing

**Two ways to avoid collisions in hashing**

1. **Chaining(Open hashing)**:-
   Inserting:- O(1), Deletion=Searching:- O(n)
   Load Factor= Number of keys/ number of slots.
   Why it is open hashing:- Because it uses extra space even if some of the slots are empty

# Sorting techniques

https://www.youtube.com/playlist?list=PL2_aWCzGMAwKedT2KfDMB9YA5DgASZb3U

1. **Selection Sort**- Pick minimum element and place at its actual position by swaping.
   T.C.:- O(n^2), Best case T.C.:- O(n^2) S.C.:- O(1) ,not Stable sort
2. **Bubble Sort**-
   T.C.:- O(n^2), Best case T.C.:- O(n) S.C.:- O(1) stable sort
3. **Insertion Sort**-
   T.C.:- O(n^2), Best case T.C.:- O(n) S.C.:- O(1) stable sort
4. **Merge Sort**-
   T.C.:- O(nlog(n)), Best case T.C.:- O(n(log(n))) S.C.:- O(n) stable sort
5. **Quick Sort**-
   T.C.:- O(nlog(n)) using randomized sort, Best case T.C.:- O(nlog(n)) S.C.:- O(1) not stable sort

# Area of triangle

Ax ( By − Cy ) + Bx ( Cy − Ay ) + Cx ( Ay − By ) /2

# Pattern searcing algos

Boyer Moore Algorithm,KMP,Rabbin karp

# Time complexity of Prims and Kruskals

t.c.= Elog(E)=Elog(v\*V)=E log(v)

# kosaraju algo for SCC

1. Do topo sort
2. transpose the graph
3. do dfs according to elements stored in topo sort stack
