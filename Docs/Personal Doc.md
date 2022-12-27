# **Tricks to solve problem:-**

1. Simulation(always read the problem and think about it,can it be solved just by simulating)
2. Sorting (bucket sort also)
3. Prefix,suffix
4. Binary search
5. Stack(PLE,NLE,PGE,NLE)
6. Running map
7. For string or array find the position (like where char mismatch and expand in both sides to find all the substring that contain this mismatch character)
8. Sort the array and then apply LIS on the one field because the other field is sorted.. (Important)
9. while backtracking in matrix we can put visited cell # or a big number to avoid using visited array
10. Assigning pointers to new array(virtual) then simulating over the old array and new array.
11. If we have to find number of removes from starting and last then we can use binary search type algo or we can find maximum subarray then just subtract it from total length of array to find minimum answer
12. Generally, the sliding window problems have some kind of aggregate, atMost k, largest substring, min substring with k etc. But some times we have given to find substrings with exact "k" values then we can apply this logic:- **exact k= atmost(k)-atmost(k-1)**
13. Concept of merging multiple sorted arrays

# Data Structures

1. Vector
2. umap,map
3. set,uset,multiset
4. PBDS
5. Trie
6. BIT(binary indexed tree)

## concepts

1. Tree iterative traversal,morris traversal (striver video)
2. linked list,DLL, reverse using recursion
3. Hair and tortoise proof
4. hash functions theory
5. (a/b)%m =(a%m\*(b^-1)%m)%m=(a%m\*(b^m-2%m)%m)%m , https://www.youtube.com/watch?v=Gd9w8m-klho
6. Josephus Problem
7. nth catalan number:- 2nCn \* (1/n+1)
8. heapify is O(n)
9. stack and heap memory

## website to learn algos

https://cp-algorithms.com/string/string-hashing.html
