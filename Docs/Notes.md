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
